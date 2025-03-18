#include "filesystem.h"

// PRIVATE 
void Filesystem::openFileOnFilesystem() {
  m_file_descriptor = open(m_file_path.c_str(), O_RDONLY);  
}
void Filesystem::openFileErrorChecking() {
  // file descriptor will return -1 if there is an error. 
  if (m_file_descriptor == -1) {
    std::cerr << "ERROR: Failed to open file: " << m_file_path << " !" << std::endl;
    std::cerr << "ERRNO: " << errno << "." << std::endl;
    std::exit(1);
  }
  // if the file has been successfully opened
  /*std::cout << "SUCCESS:: file opened with FD " << m_file_descriptor << std::endl;*/
};
void Filesystem::seekToFileOffset() {
  auto new_file_offset = lseek(m_file_descriptor, m_lseek_byte_offset, SEEK_SET);  
}
/*auto Filesystem::readFileFromDescriptor() {*/
/*  char read_buffer[m_read_buffer_size];*/
/*  auto bytes_read = read(m_file_descriptor, read_buffer, m_read_buffer_size);*/
/*  return read_buffer;*/
/*}*/

// PUBLIC 
// INIT
Filesystem::Filesystem(const std::string& file_path, const std::uint16_t read_buffer_size, uint16_t lseek_byte_offset) 
  : m_file_path { file_path }, m_read_buffer_size { read_buffer_size }, m_lseek_byte_offset { lseek_byte_offset } {}

  void Filesystem::closeFile() {
  close(m_file_descriptor);
}
void Filesystem::openFile() {
  openFileOnFilesystem();
  openFileErrorChecking();
}
