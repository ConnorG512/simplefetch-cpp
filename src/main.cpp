#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ostream>

#include "filesystem.h"
#include "printer.h"
#include "uname.h"
#include "user.h"

int main (int argc, char *argv[]) {
  Uname uname{};
  // USER
  {
    Printer user_printer {"USER: ", Printer::bright_cyan};
    User user_stat {};
    std::cout << "Hostname: " << uname.getNodeName() << std::endl;
    std::cout << "UserID: " << user_stat.getUid() << std::endl;
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
  // Exit 
  return 0;
}

