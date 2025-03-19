#include <cstdio>
#include <cstdlib>

#include "filesystem.h"
#include "printer.h"

int main (int argc, char *argv[]) {
  Printer user {"USER: ", Printer::bright_cyan};
  user.printLineToScreen();
  Filesystem user_fs {"/etc/hostname", 128, 0};
  
  // Exit 
  return 0;
}

