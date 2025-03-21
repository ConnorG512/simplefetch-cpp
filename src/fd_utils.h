#ifndef FDUTILS_H
#define FDUTILS_H

#include <iostream>


namespace fd_utils {
  /*
   * Checks to see if the file descriptor has returned a -1 value
   * and will terminate the application if so.*/
  void fileDescriptorErrorChecking(int32_t file_descriptor, std::string file_path);
}

#endif // FDUTILS_H
