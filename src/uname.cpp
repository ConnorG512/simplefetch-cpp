#include "uname.h"
#include <iostream>
#include <ostream>
#include <string>
#include <sys/utsname.h>

void Uname::getUnameInformation() {
  uname(&m_uname_buffer);  
  std::cout << m_uname_buffer.version << std::endl;
  std::cout << m_uname_buffer.machine << std::endl;
  std::cout << m_uname_buffer.release << std::endl;
  std::cout << m_uname_buffer.domainname << std::endl;
  std::cout << m_uname_buffer.nodename << std::endl;
  std::cout << m_uname_buffer.sysname << std::endl;
}
std::string Uname::getVersion() {

}
std::string Uname::getMachine() {

}
std::string Uname::getRelease() {

}
std::string Uname::getDomainName() {

}
std::string Uname::getNodeName() {

}
std::string Uname::getSysName() {

}
Uname::Uname() {
  getUnameInformation();
}
