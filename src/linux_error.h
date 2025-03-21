#ifndef FDUTILS_H
#define FDUTILS_H

#include <iostream>


namespace linux_error {
  /*
   * Checks to see if the file descriptor has returned a -1 value
   * and will terminate the application if so.*/
  void fileDescriptorErrorChecking(int32_t error_code);
}

#endif // FDUTILS_H
