#include <cstdlib>

#include "file.cpp"

int main (int argc, char *argv[]) {
  File hostname {"Hostname:","/etc/hostname",0};
  hostname.printTitleToScreen(); 
  hostname.printFileToScreen();

  File version {"Kernel:","/proc/version",2};
  version.printTitleToScreen();
  version.printFileToScreen();

  File memTotal {"Memory Total (kB):", "/proc/meminfo",1};
  memTotal.printTitleToScreen();
  memTotal.printFileToScreen();
  
  File memFree {"Memory Free (kB):", "/proc/meminfo",4};
  memFree.printTitleToScreen();
  memFree.printFileToScreen();
  return 0;
}

