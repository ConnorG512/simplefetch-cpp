#ifndef USER_H
#define USER_H

#include <string>
#include <sys/utsname.h>
#include <unistd.h>

class User {
  public: 
    int getUid();
    int getEuid();
    int getGroupId();
    int getGroupEid();

    User();
  private:
    int m_user_id;
    int m_user_eid;
    int m_group_id;
    int m_group_eid;
    
    void getIDValues();
};

#endif // UNAME_H
