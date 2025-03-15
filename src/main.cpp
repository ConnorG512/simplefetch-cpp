#include <cstdio>
#include <cstdlib>

#include "file.h"
#include "title.h"

int main (int argc, char *argv[]) {
  Title title_hostname {"USER:", Title::bright_green};
  title_hostname.printLineToScreen();
  File hostname {"Hostname:", "/etc/hostname"};
  hostname.printTitleToScreen();
  hostname.printFileToScreen();

  Title title_software {"SOFTWARE:", Title::bright_black};
  title_software.printLineToScreen();
  FileByWord kernel {"Kernel:", "/proc/version", 2};
  kernel.printTitleToScreen();
  kernel.printFileToScreen();

  Title title_hardware {"HARDWARE:", Title::bright_magenta};
  title_hardware.printLineToScreen();
  FileByWord memTotal {"Memory Total (kB):", "/proc/meminfo", 1};
  memTotal.printTitleToScreen();
  memTotal.printFileToScreen();

  FileByWord memFree {"Memory Free (kB):", "/proc/meminfo", 4};
  memFree.printTitleToScreen();
  memFree.printFileToScreen();

  // Exit 
  return 0;
}

