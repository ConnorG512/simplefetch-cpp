#include <cstdlib>

#include "file.cpp"

int main (int argc, char *argv[]) {
  // Hostname object build from File class
  File hostname {"Hostname:","/etc/hostname"};
  hostname.printTitleToScreen(); 
  hostname.printFileToScreen();
  File version {"Version:","/proc/version"};
  version.printTitleToScreen();
  version.printFileToScreen();
  return 0;
}

