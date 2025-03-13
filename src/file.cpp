#include <fstream>
#include <iostream>
#include <string>

class File {
  public:
    std::string title{};
    std::string filePath{};

    File() {
      title = "undefined";
      filePath = "undefined";
    }
    virtual void init(std::string categoryTitle, std::string pathToFile) {
      title = categoryTitle;
      filePath = pathToFile;
    }

    void printTitleToScreen() {
    std::cout << title << " ";
    }
    virtual void printFileToScreen () {
      std::ifstream targetFile{filePath};
      // Error handling for not being able to open.
      if (!targetFile) {
        std::cerr << "Failed to open file!";
        std::exit(1);
      }
      std::string strInput{};
      // Print file contents
      while (std::getline(targetFile, strInput)) {
        std::cout << strInput << "\n";
      }
      targetFile.close();
    }
};


class FileByWord : public File {
  public:
    int fileIndex;
    
    FileByWord() : File() {
      fileIndex = 0;
    }
    virtual void init(std::string categoryTitle, std::string pathToFile, int wordIndex) {
      title = categoryTitle;
      filePath = pathToFile;
      fileIndex = wordIndex;
    }

    virtual void printFileToScreen () override {
      std::ifstream targetFile{filePath};
      // Error handling for not being able to open.
      if (!targetFile) {
        std::cerr << "Failed to open file!";
        std::exit(1);
      }
      std::string strInput{};
      // Print file contents
      int index = 0;
      while (targetFile >> strInput) {
        if (index == fileIndex) {
          std::cout << strInput << "\n";
        }
        index ++;
      }
    }
};
