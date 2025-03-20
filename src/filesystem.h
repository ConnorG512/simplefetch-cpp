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
#include <errno.h>

class Filesystem {
  private:
  // MEMBER VARIABLES:
  std::string m_file_path; // Path to the file that you wish to read from the computer.
  std::int32_t m_file_descriptor; // File descriptor stored to read and seek files.
  std::uint8_t m_read_buffer_size; // Maximum number of bytes that you wish to read from the buffer.
  std::uint16_t m_lseek_byte_offset; // Offset begin to read from the file if set.
  char m_read_buffer[128]; 

  // PRIVATE MEMBER FUNCTIONS:
  /*
   * Read the file from the filesystem. 
   * Store the file descriptor in the 
   * file descriptor variable as part
   * of the class. If there is an error
   * in finding the file, the program 
   * will terminate. File will be opened
   * As read only.*/
  void openFileOnFilesystem();
  /*
   * Read the file in the file descriptor and store the result in 
   * variable m_read_buffer 
  */
  void readFile();
  /*
   * Checks to see if the file descriptor has returned a -1 value
   * and will terminate the application if so.*/
  void fileDescriptorErrorChecking();
  /*
   * Seek to a specific offet in the given file descriptor 
   * from the start of the file.*/
  void seekToFileOffset();
  
  public:
  // PUBLIC MEMBER FUNCTIONS
  // Constructor
  Filesystem(const std::string& file_path, const std::uint8_t read_buffer_size, uint16_t lseek_byte_offset); 
  // Destructor
  ~Filesystem();
};

#endif // FILESYSTEM_H
