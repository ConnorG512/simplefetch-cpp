#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

void printFileToScreen () {
  std::ifstream targetFile{"/etc/hostname"};
  // Error handling for not being able to open.
  if (!targetFile) {
    std::cerr << "Failed to open file!";
    std::exit(1);
  }
  std::string strInput{};
  while (std::getline(targetFile, strInput)) {
    std::cout << strInput << "\n";
  }
}

int main (int argc, char *argv[]) {
  printFileToScreen();
  return 0;
}

