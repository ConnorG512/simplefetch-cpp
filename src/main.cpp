#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ostream>

#include "file.h"

int main (int argc, char *argv[]) {
  std::cout << "\033[96m---USER:\033[0m" << std::endl;
  File hostname {"Hostname:", "/etc/hostname"};
  hostname.printTitleToScreen();
  hostname.printFileToScreen();

  std::cout << "\033[96m---SOFTWARE:\033[0m" << std::endl;
  FileByWord kernel {"Kernel:", "/proc/version", 2};
  kernel.printTitleToScreen();
  kernel.printFileToScreen();

  std::cout << "\033[96m---HARDWARE:\033[0m" << std::endl;
  FileByWord memTotal {"Memory Total (kB):", "/proc/meminfo", 1};
  memTotal.printTitleToScreen();
  memTotal.printFileToScreen();

  FileByWord memFree {"Memory Free (kB):", "/proc/meminfo", 4};
  memFree.printTitleToScreen();
  memFree.printFileToScreen();
  return 0;
}

