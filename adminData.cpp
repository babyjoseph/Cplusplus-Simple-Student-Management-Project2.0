#include "adminData.h"

std::string Admin::GetUname(){
  return _userName;
}

std::string Admin::GetUpass(){
  return _userPass;
}

void Admin::SetUname(std::string userName){
  _userName = userName;
}
void Admin::SetUpass(std::string userPass){
  _userPass = userPass;
}
