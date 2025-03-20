#include "filesystem.h"

// PRIVATE 
void Filesystem::openFileOnFilesystem() {
  m_file_descriptor = open(m_file_path.c_str(), O_RDONLY);  
  // Call error checking if FD is -1 
  fileDescriptorErrorChecking();
}
void Filesystem::fileDescriptorErrorChecking() {
  // file descriptor will return -1 if there is an error. 
  if (m_file_descriptor == -1) {
    std::cerr << "ERROR: File descriptor returned -1! " << m_file_path << " !" << std::endl;
    std::cerr << "ERRNO: " << errno << "." << std::endl;
    std::exit(1);
  }
};
void Filesystem::readFile() {
  auto bytes_read_from_file = read(m_file_descriptor, m_read_buffer, m_read_buffer_size); 
  m_read_buffer[bytes_read_from_file] = 0;
  std::cout << m_read_buffer << std::endl;
}
void Filesystem::seekToFileOffset() {
  lseek(m_file_descriptor, m_lseek_byte_offset, SEEK_SET);  
}

// PUBLIC 
// CONSTRUCTOR:
Filesystem::Filesystem(const std::string& file_path, const std::uint8_t read_buffer_size, const uint16_t lseek_byte_offset) : 
  m_file_path { file_path }, m_read_buffer_size { read_buffer_size }, m_lseek_byte_offset { lseek_byte_offset } {
    openFileOnFilesystem();
    seekToFileOffset();
    readFile();
  }
Filesystem::~Filesystem() {
  // Close the file when object has been destroyed.  
  close(m_file_descriptor);
}

