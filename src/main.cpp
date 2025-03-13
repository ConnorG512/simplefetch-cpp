#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

void getFile () {
  std::ifstream targetFile{"/etc/hostname"};
  // Error handling for not being able to open.
  if (!targetFile) {
    std::cerr << "Failed to open file!";
    std::exit(1);
  }
  std::string strInput{};
  while (targetFile >> strInput) {
    std::cout << strInput << "\n";
  }
}

void printToScreen() {

}

int main (int argc, char *argv[]) {
  getFile(); 
  return 0;
}

