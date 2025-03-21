#include "linux_error.h"

#include <errno.h>

void linux_error::fileDescriptorErrorChecking(std::int32_t error_code) {
  // file descriptor will return -1 if there is an error. 
  if (error_code == -1) {
    std::cerr << "ERROR: -1 returned!" << std::endl;
    std::cerr << "ERRNO: " << errno << "." << std::endl;
    std::exit(1);
  }
}
