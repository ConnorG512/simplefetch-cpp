#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <cstdint>
#include <string>
#include <fcntl.h>
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <ostream>
#include <cstdio>

class Filesystem {
  private:
  // MEMBER VARIABLES:
  std::string m_file_path;
  std::int32_t m_file_descriptor;
  std::uint8_t m_read_buffer_size;
  std::uint8_t m_lseek_byte_offset;

  // MEMBER FUNCTIONS:
  /*
   * Read the file from the filesystem. 
   * Store the file descriptor in the 
   * file descriptor variable as part
   * of the class. If there is an error
   * in finding the file, the program 
   * will terminate. */
  void openFileOnFilesystem();
  /*
   * Seek to a specific offet in the given file descriptor.*/
  void seekToFileOffset();
  /*
   * Read the current file using the file descriptor. 
   * */
  void readFileFromDescriptor();
  
  public:
  // Initializer
  Filesystem(const std::string& m_file_path); 
};

#endif // FILESYSTEM_H
