#include "filesystem.h"
#include <cstdint>
#include <cstdio>
#include <unistd.h>

Filesystem::Filesystem(const std::string& file_path, const std::uint16_t& read_buffer_size) 
  : m_file_path { file_path }, m_read_buffer_size { read_buffer_size } {}

void Filesystem::openFileOnFilesystem() {
  m_file_descriptor = open(m_file_path.c_str(), O_RDONLY);  
  // file descriptor will return -1 if there is an error. 
  if (m_file_descriptor == -1) {
    std::cerr << "ERROR: Failed to open file: " << m_file_path << " !" << std::endl;
    std::exit(1);
  }
}
void Filesystem::seekToFileOffset() {
  auto new_file_offset = lseek(m_file_descriptor, m_lseek_byte_offset, SEEK_SET);  
}
auto Filesystem::readFileFromDescriptor() {
  char read_buffer[m_read_buffer_size];
  auto bytes_read = read(m_file_descriptor, read_buffer, m_read_buffer_size);
  return bytes_read;
}
void Filesystem::closeFile() {
  close(m_file_descriptor);
}
