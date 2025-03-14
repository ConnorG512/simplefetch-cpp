#include <fstream>
#include <iostream>
#include <string>

class File {
  public:
    std::string m_title{};
    std::string m_filePath{};

    File(std::string title, std::string filePath)
      : m_title { title }, m_filePath {filePath} {
    }
    void printTitleToScreen() {
    std::cout << m_title << " ";
    }
    virtual void printFileToScreen () {
      std::ifstream targetFile{m_filePath};
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
    int m_fileIndex;
    
    FileByWord(std::string title, std::string filePath, int fileIndex)
      : File(title, filePath), m_fileIndex { fileIndex } {
    }
    virtual void printFileToScreen () override {
      std::ifstream targetFile{m_filePath};
      // Error handling for not being able to open.
      if (!targetFile) {
        std::cerr << "Failed to open file!";
        std::exit(1);
      }
      std::string strInput{};
      // Print file contents
      int index = 0;
      while (targetFile >> strInput) {
        if (index == m_fileIndex) {
          std::cout << strInput << "\n";
        }
        index ++;
      }
    }
};
