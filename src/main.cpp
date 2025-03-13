#include <cstdio>
#include <cstdlib>

#include "file.cpp"

int main (int argc, char *argv[]) {

  File hostname;
  hostname.init("Hostname:", "/etc/hostname");
  hostname.printTitleToScreen();
  hostname.printFileToScreen();
  
  FileByWord kernel;
  kernel.init("Kernel:","/proc/version", 2);
  kernel.printTitleToScreen();
  kernel.printFileToScreen();

  FileByWord memTotal;
  memTotal.init("Memory Total (kB):","/proc/meminfo",1);
  memTotal.printTitleToScreen();
  memTotal.printFileToScreen();

  FileByWord memFree;
  memFree.init("Free Total (kB):","/proc/meminfo",4);
  memFree.printTitleToScreen();
  memFree.printFileToScreen();

  return 0;
}

