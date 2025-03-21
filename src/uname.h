#ifndef UNAME_H
#define UNAME_H

#include <string>
#include <sys/utsname.h>
class Uname {  
  public:
    Uname();
    // Getters
    std::string getVersion();
    std::string getMachine();
    std::string getRelease();
    std::string getDomainName();
    std::string getNodeName();
    std::string getSysName();

  private:
  utsname m_uname_buffer;

  void getUnameInformation();
};

#endif // UNAME_H
