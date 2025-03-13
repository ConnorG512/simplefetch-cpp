#include <fstream>
#include <iostream>
#include <string>

struct File {
  std::string title{};
  std::string filePath{};
  int fileIndex;

  void printTitleToScreen() {
    std::cout << title << " ";
  }
  void printFileToScreen () {
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
