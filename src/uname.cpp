#include "uname.h"
#include <sys/utsname.h>

void Uname::getUnameInformation() {
  uname(&m_uname_buffer);  
}
Uname::Uname() {
  getUnameInformation();
}
