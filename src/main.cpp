#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ostream>

#include <sys/utsname.h>

#include "filesystem.h"
#include "printer.h"
#include "uname.h"

int main (int argc, char *argv[]) {
  Uname uname{};
  // std::cout << uname.getSysName() << std::endl;
  // std::cout << uname.getVersion() << std::endl;
  // std::cout << uname.getNodeName() << std::endl;
  // std::cout << uname.getDomainName() << std::endl;
  // std::cout << uname.getMachine() << std::endl;
  // std::cout << uname.getRelease() << std::endl;
  // USER
  {
    Printer user_printer {"USER: ", Printer::bright_cyan};
    std::cout << "Hostname: " << uname.getNodeName() << std::endl;
    std::cout << "Uptime: ";
    Filesystem uptime_fs {"/proc/uptime", 30, 0};
  }
  // HARDWARE
  {
    Printer hardware_printer {"HARDWARE: ", Printer::bright_red};
    std::cout << "Version: " << uname.getRelease() << std::endl;
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

