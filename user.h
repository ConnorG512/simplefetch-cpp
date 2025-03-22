#ifndef USER_H
#define USER_H

#include <unistd.h>
#include <string>

class User {
  public: 
    // GETTERS
    std::string getUid();
    std::string getEuid();
    std::string getGroupId();
    std::string getGroupEid();

  private:
    std::string m_user_id;
    std::string m_user_eid;
    std::string m_group_id;
    std::string m_group_eid;
 
    getIDValues() {

    }
};

#endif // UNAME_H
