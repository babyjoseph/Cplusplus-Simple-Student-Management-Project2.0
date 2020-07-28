#include "admin.h"

namespace{
  enum AdminMenu{
    Pause,
    Login,
    SignUp,
    Close
  };
  AdminMenu myAdmin = Pause;
  enum MenuAdmin{
    Stand,
    Add,
    Manage,
    Display,
    Exit
  };
  MenuAdmin meAdmin = Stand;
  std::string ans, choice;
  std::vector<Admin>admin;
  bool granted1 = false,granted2 = false,granted3 = false;
}

void AdminLogin(){
  std::string userName,userPass;
  std::cout << "Username: ";
  getline(std::cin,userName);
  for(unsigned i = 0; i < admin.size(); i++){
    if(userName == admin[i].GetUname()){
      granted1 = true;
      std::cout << "Password: ";
      getline(std::cin, userPass);
      if(userPass == admin[i].GetUpass()){
        granted2 = true;
      }
      else{
        std::cout << "Wrong Password!" << std::endl;
        granted1 = false;
        granted2 = false;
        break;
      }
    }
  }
  if(!granted1){
    std::cout << "Unknown Username!" << std::endl;
  }
  else if(!granted2){
    std::cout << "Try Again!" << std::endl;
  }
  else{
    granted3 = true;
  }
}

Admin AdminAdd(){
  Admin temp;
  std::string userName, userPass;
  std::cout << "Enter Username: ";
  getline(std::cin, userName);
  temp.SetUname(userName);
  std::cout << "Enter password: ";
  getline(std::cin, userPass);
  temp.SetUpass(userPass);
  return temp;
}
void AdminSign(){
  Admin some = AdminAdd();
  admin.push_back(some);
}
void AdminAccess(){
  while(true){
    switch(meAdmin){
      case Stand:
        std::cout << "[add]" << std::endl;
        std::cout << "[manage]" << std::endl;
        std::cout << "[display]" << std::endl;
        std::cout << "[exti]" << std::endl;
        std::cout << "Input: ";
        getline(std::cin, choice);
        if(choice == "add"){
          meAdmin = Add;
        }
        else if(choice == "manage"){
          meAdmin = Manage;
        }
        else if(choice == "display"){
          meAdmin = Display;
        }
        else if(choice == "exit"){
          meAdmin = Exit;
        }
        else{
          std::cout << "Unknown Input!" << std::endl;
          meAdmin = Stand;
        }
        break;
      case Add:
        AddMenu();
        meAdmin = Stand;
        break;
      case Manage:
        meAdmin = Stand;
        break;
      case Exit:
        meAdmin = Stand;
        break;
    }
    if(meAdmin == Exit){
      break;
    }
  }
}

void AdminMain(){
  while(true){
    switch(myAdmin){
      case Pause:
        std::cout << "[login]" << std::endl;
        std::cout << "[signup]" << std::endl;
        std::cout << "[exit]" << std::endl;
        std::cout << "Input: ";
        getline(std::cin, ans);
        if(ans == "login"){
          myAdmin = Login;
        }
        else if (ans == "signup"){
          myAdmin = SignUp;
        }
        else if (ans == "exit"){
          myAdmin = Close;
        }
        break;
      case Login:
        AdminLogin();
        if(granted3){
          AdminAccess();
        }
        myAdmin = Pause;
        break;
      case SignUp:
        AdminSign();
        myAdmin = Pause;
        break;
      case Close:
        myAdmin = Pause;
        break;
    }
    if(myAdmin == Close){
      break;
    }
  }
}
