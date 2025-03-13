#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

struct File {
  std::string title{};
  std::string filePath{};
  
  void printFileToScreen () {
    std::ifstream targetFile{filePath};
    // Error handling for not being able to open.
    if (!targetFile) {
      std::cerr << "Failed to open file!";
      std::exit(1);
    }
    std::string strInput{};
    // Print Title
    std::cout << title << " ";
    // Print file contents
    while (std::getline(targetFile, strInput)) {
      std::cout << strInput << "\n";
    }
  }
};

int main (int argc, char *argv[]) {
  // Hostname object build from File class
  File hostname {"Hostname:","/etc/hostname"};
  hostname.printFileToScreen();
  File version {"Version:","/proc/version"};
  version.printFileToScreen();
  return 0;
}

