#include <cstdio>
#include <cstdlib>

#include "filesystem.h"
#include "printer.h"

int main (int argc, char *argv[]) {
  Printer user {"USER: ", Printer::bright_cyan};
  Filesystem user_fs {"/etc/hostname", 128, 0};
  Filesystem uptime_fs {"/proc/uptime", 30, 0};
  Printer hardware_printer {"HARDWARE: ", Printer::bright_magenta};
  Filesystem meminfo_fs {"/proc/meminfo", 8, 16};
  // Exit 
  return 0;
}

