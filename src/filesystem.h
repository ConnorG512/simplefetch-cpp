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
  std::string m_file_path;
  std::int32_t m_file_descriptor;
  std::uint16_t m_read_buffer_size;
  std::uint16_t m_lseek_byte_offset;

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
   * Seek to a specific offet in the given file descriptor 
   * from the start of the file.*/
  void openFileErrorChecking();
  /*
   * Checks to see if the file descriptor has returned a -1 value
   * and will terminate the application if so.*/
  void seekToFileOffset();
  /*
   * Read the current file using the file descriptor. 
   * */
  auto readFileFromDescriptor();
  
  public:
  // PUBLIC MEMBER FUNCTIONS
  // Initializer
  Filesystem(const std::string& file_path, const std::uint16_t read_buffer_size, uint16_t lseek_byte_offset); 
  /*
   * Handle the file opening and error checking in a single public function.
   * Calls both openFileOnFilesystem and openFileErrorChecking in a single 
   * function.*/
  void openFile();
  /*
   * Close the open file once all required functions have been called.*/
  void closeFile();
};

#endif // FILESYSTEM_H
