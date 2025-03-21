#include "uname.h"
#include <sys/utsname.h>

// PUBLIC
std::string Uname::getVersion() {
  return m_uname_buffer.version;
}
std::string Uname::getMachine() {
  return m_uname_buffer.machine;
}
std::string Uname::getRelease() {
  return m_uname_buffer.release;
}
std::string Uname::getDomainName() {
  return m_uname_buffer.domainname;
}
std::string Uname::getNodeName() {
  return m_uname_buffer.nodename;
}
std::string Uname::getSysName() {
return m_uname_buffer.sysname;
}
Uname::Uname() {
  getUnameInformation();
}

// PRIVATE  
void Uname::getUnameInformation() {
  uname(&m_uname_buffer);  
  /*std::cout << m_uname_buffer.version << std::endl;*/
  /*std::cout << m_uname_buffer.machine << std::endl;*/
  /*std::cout << m_uname_buffer.release << std::endl;*/
  /*std::cout << m_uname_buffer.domainname << std::endl;*/
  /*std::cout << m_uname_buffer.nodename << std::endl;*/
  /*std::cout << m_uname_buffer.sysname << std::endl;*/
}
