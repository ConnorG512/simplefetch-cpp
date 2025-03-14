#include <cstdio>
#include <cstdlib>
#include <iostream>

#include "file.cpp"

int main (int argc, char *argv[]) {
  std::cout << "---USER:\n";
  File hostname {"Hostname:", "/etc/hostname"};
  hostname.printTitleToScreen();
  hostname.printFileToScreen();
  std::cout << "---SOFTWARE:\n";
  FileByWord kernel {"Kernel:", "/proc/version", 2};
  kernel.printTitleToScreen();
  kernel.printFileToScreen();
  std::cout << "---HARDWARE:\n";
  FileByWord memTotal {"Memory Total (kB):", "/proc/meminfo", 1};
  memTotal.printTitleToScreen();
  memTotal.printFileToScreen();
  FileByWord memFree {"Memory Free (kB):", "/proc/meminfo", 4};
  memFree.printTitleToScreen();
  memFree.printFileToScreen();

  return 0;
}

