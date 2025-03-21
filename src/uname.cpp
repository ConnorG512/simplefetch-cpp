#include "uname.h"
#include <iostream>
#include <ostream>
#include <sys/utsname.h>

void Uname::getUnameInformation() {
  uname(&m_uname_buffer);  
  std::cout << m_uname_buffer.release << std::endl;
  std::cout << m_uname_buffer.machine << std::endl;
  std::cout << m_uname_buffer.version << std::endl;
}
Uname::Uname() {
  getUnameInformation();
}
