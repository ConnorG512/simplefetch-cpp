#include <cstdio>
#include <cstdlib>

#include "file.cpp"

int main (int argc, char *argv[]) {

  File hostname;
  hostname.filePath = "/etc/hostname";
  hostname.title = "Hostname:";
  hostname.printTitleToScreen();
  hostname.printFileToScreen();
  
  FileByWord kernel;
  kernel.title = "Kernel:";
  kernel.filePath = "/proc/version";
  kernel.fileIndex = 2;
  kernel.printTitleToScreen();
  kernel.printFileToScreen();

  FileByWord memTotal;
  memTotal.title = "Memory total (kB):";
  memTotal.filePath = "/proc/meminfo";
  memTotal.fileIndex = 1;
  memTotal.printTitleToScreen();
  memTotal.printFileToScreen();

  FileByWord memFree;
  memFree.title = "Memory free (kB):";
  memFree.filePath = "/proc/meminfo";
  memFree.fileIndex = 4;
  memFree.printTitleToScreen();
  memFree.printFileToScreen();

  return 0;
}

