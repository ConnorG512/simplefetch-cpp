#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ostream>

#include <sys/utsname.h>
#include <unistd.h>
#include "filesystem.h"
#include "printer.h"
#include "uname.h"

int main (int argc, char *argv[]) {
  Uname uname{};
  // USER
  {
    Printer user_printer {"USER: ", Printer::bright_cyan};
    std::cout << "Hostname: " << uname.getNodeName() << std::endl;
    std::cout << "UserID: " << getuid() << std::endl;
    std::cout << "Uptime: ";
    Filesystem uptime_fs {"/proc/uptime", 30, 0};
  }
  // SOFTWARE
  {
    Printer software_printer {"SOFTWARE: ", Printer::bright_green};
    std::cout << "OS: " << uname.getSysName() << std::endl;
    std::cout << "Version: " << uname.getRelease() << " " <<uname.getMachine() << std::endl;
  }
  // HARDWARE
  {
    Printer hardware_printer {"HARDWARE: ", Printer::bright_red};
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

