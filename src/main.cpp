#include <cstdlib>

#include "file.cpp"

int main (int argc, char *argv[]) {
  File hostname {"Hostname:","/etc/hostname"};
  hostname.printTitleToScreen(); 
  hostname.printFileToScreen();

  File version {"Version:","/proc/version"};
  version.printTitleToScreen();
  version.printFileToScreen();
  return 0;
}

