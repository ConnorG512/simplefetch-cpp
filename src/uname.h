#ifndef UNAME_H
#define UNAME_H

#include <sys/utsname.h>
class Uname {  
  public:

  private:
  utsname m_uname_buffer;

  void getUnameInformation();
};

#endif // UNAME_H
