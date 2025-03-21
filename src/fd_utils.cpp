#include "fd_utils.h"

#include <cstdint>
#include <string>
#include <errno.h>

void fd_utils::fileDescriptorErrorChecking(std::int32_t file_descriptor, std::string file_path) {
  // file descriptor will return -1 if there is an error. 
  if (file_descriptor == -1) {
    std::cerr << "ERROR: File descriptor returned -1! " << file_path << " !" << std::endl;
    std::cerr << "ERRNO: " << errno << "." << std::endl;
    std::exit(1);
  }
}
