#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

struct File {
  std::string filePath{};
  std::string title{};
  
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
  File hostname {"/etc/hostname", "Hostname:"};
  hostname.printFileToScreen();
  File version {"/proc/version", "Version:"};
  version.printFileToScreen();
  return 0;
}

