#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ostream>

#include <sys/utsname.h>

#include "filesystem.h"
#include "printer.h"

int main (int argc, char *argv[]) {
  // USER
  {
    Printer user_printer {"USER: ", Printer::bright_cyan};
    std::cout << "Hostname: ";
    Filesystem user_fs {"/etc/hostname", 128, 0};
    std::cout << "Uptime: ";
    Filesystem uptime_fs {"/proc/uptime", 30, 0};
  }
  // HARDWARE
  {
    Printer hardware_printer {"HARDWARE: ", Printer::bright_red};
    std::cout << "Version: ";
    Filesystem kernelinfo_fs {"/proc/version", 14, 0xE};
    std::cout << std::endl;
    std::cout << "Total memory: ";
    Filesystem meminfo_fs {"/proc/meminfo", 8, 16};
    std::cout << std::endl;
  }
  // NETWORK
  {
    Printer network_printer {"NETWORK: ", Printer::bright_magenta};
  }
  // Exit 
  return 0;
}

