#ifndef UNAME_H
#define UNAME_H

#include <string>
#include <sys/utsname.h>
class Uname {  
  public:
    Uname();
    // Getters
    auto getVersion();
    auto getMachine();
    auto getRelease();
    auto getDomainName();
    auto getNodeName();
    auto getSysName();

  private:
  utsname m_uname_buffer;

  void getUnameInformation();
};

#endif // UNAME_H
