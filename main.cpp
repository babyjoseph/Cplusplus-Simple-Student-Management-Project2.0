#include <iostream>
#include <string>
#include "admin.h"

namespace {
  enum MainMenu{
    MenuState,
    AdminState,
    Studyante,
    Exit
  };
  MainMenu myMain = MenuState;
  std::string ans;
}

int main(){
  while(true){
    switch(myMain){
      case MenuState:
        std::cout << "[admin]" << std::endl;
        std::cout << "[student]" << std::endl;
        std::cout << "[exit]" << std::endl;
        std::cout << "Input: ";
        getline(std::cin, ans);
        if(ans == "admin"){
          myMain = AdminState;
        }
        else if (ans == "student"){
          myMain = Studyante;
        }
        else if (ans == "exit"){
          myMain = Exit;
        }
        else {
          std::cout << "Unknown Input!" << std::endl;
        }
        break;
      case AdminState:
          AdminMain();
//        AddMenu();
        myMain = MenuState;
        break;
      case Studyante:
        myMain = MenuState;
        break;
      case Exit:
        myMain = MenuState;
        break;
    }
    if(myMain == Exit){
      break;
    }
  }
  return 0;
}
