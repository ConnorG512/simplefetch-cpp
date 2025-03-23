#include "user.h"
#include <string>
#include <unistd.h>

// PUBLIC 
int User::getEuid() {
  return m_user_eid;
}
int User::getUid() {
  return m_user_id;
}
int User::getGroupEid() {
  return m_group_eid;
}
int User::getGroupId() {
  return m_group_id;
}

User::User(){
  getIDValues();
}

// PRIVATE  
// Gathers all the id values to be used by the getters
void User::getIDValues() {
  m_user_eid = geteuid();
  m_user_id = getuid();
  m_group_eid = getGroupEid();
  m_group_id = getGroupId();
}
