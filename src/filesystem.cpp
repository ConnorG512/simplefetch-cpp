#include "filesystem.h"
#include <cstdio>
#include <unistd.h>

Filesystem::Filesystem(const std::string& file_path)
  : m_file_path { file_path } {};

void Filesystem::openFileOnFilesystem() {
  m_file_descriptor = open(m_file_path.c_str(), O_RDONLY);  
  // file descriptor will return -1 if there is an error. 
  if (m_file_descriptor == -1) {
    std::cerr << "ERROR: Failed to open file: " << m_file_descriptor << " !" << std::endl;
    std::exit(1);
  }
}
void Filesystem::seekToFileOffset() {
  auto new_file_offset = lseek(m_file_descriptor, m_lseek_byte_offset, SEEK_SET);  
}
void Filesystem::readFileFromDescriptor() {
  char read_buffer[255];
  auto bytes_read = read(m_file_descriptor, read_buffer, 255);
}
void Filesystem::closeFile() {
  close(m_file_descriptor);
}
