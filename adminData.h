#ifndef ADMIN_DATA_H
#define ADMIN_DATA_H

#include <string>
class Admin{
  std::string _userName, _userPass;
public:
  std::string GetUname();
  std::string GetUpass();
  void SetUname(std::string userName);
  void SetUpass(std::string userPass);
};

#endif
