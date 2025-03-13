#include <cstdlib>

#include "file.cpp"

int main (int argc, char *argv[]) {
  File hostname {"Hostname:","/etc/hostname",0};
  hostname.printTitleToScreen(); 
  hostname.printFileToScreen();

  File version {"Version:","/proc/version",2};
  version.printTitleToScreen();
  version.printFileToScreen();
  return 0;
}

