#include <cstdio>
#include <cstdlib>

#include "filesystem.h"
#include "printer.h"

int main (int argc, char *argv[]) {
  Printer user {"USER: ", Printer::bright_cyan};
  user.printLineToScreen();
  Filesystem user_fs {"/etc/hostname", 64, 0};
  user_fs.openFile();
  
  // Exit 
  return 0;
}

