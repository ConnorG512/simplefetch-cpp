#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>

void getFile () {
  std::ifstream inf{"/etc/hostname"};
  // Error handling for not being able to open.
  if (!inf) {
    std::cerr << "Failed to open file!";
    std::exit(1);
  }
  std::string strInput{};
  while (inf >> strInput) {
    std::cout << strInput << "\n";
  }
}

int main (int argc, char *argv[]) {
  getFile(); 
  return 0;
}

