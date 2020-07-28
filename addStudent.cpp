#include "addStudent.h"
namespace{
  enum AddMenu{
    Pause,
    Yes,
    Ayaw
  };
  AddMenu myAdd = Pause;
  std::string sagot;
}
std::vector<Student>myStudent;
//Student Process
Student Adding(){
  Student temp;
  Subject subjTemp;
  std::string fname,mname,lname,subj;
  int nosubj, year;
  std::cout << "==================== Student ====================" << std::endl;
  std::cout << "Enter Student Year: ";
  std::cin >> year;
  std::cin.ignore();
  temp.SetYear(year);
  std::cout << "Enter First Name: ";
  getline(std::cin,fname);
  temp.SetFname(fname);
  std::cout << "Enter Middle Name: ";
  getline(std::cin, mname);
  temp.SetMname(mname);
  std::cout << "Enter Last Name: ";
  getline(std::cin, lname);
  temp.SetLname(lname);
  std::cout << "Enter Number of Subjects: ";
  std::cin >> nosubj;
  std::cin.ignore();
  temp.SetNosubj(nosubj);
  for(int i = 0; i < nosubj; i++){
    std::cout << "Enter Subject " << i + 1 << ": ";
    getline(std::cin,subj);
    subjTemp.SetSubj(subj);
    temp.SetMySubj(subjTemp);
  }
  return temp;
}
void AddingStudent(){
  Student student = Adding();
  myStudent.push_back(student);
}

//Display Student and Subjects
void SampleDisplay(){
  std::string subj[10];
  for(unsigned i = 0; i < myStudent.size(); i++){
    std::cout << "==================== Student ====================" << std::endl;
    std::cout << "Student Name: " << myStudent[i].GetLname() << ", " << myStudent[i].GetFname() << " " << myStudent[i].GetMname() << std::endl;
    std::cout << "Student Year: " << myStudent[i].GetYear() << std::endl;
    std::cout << "Subjects: " << std::endl;
    myStudent[i].GetMySubj();
  }
}

//Menu for adding
void AddMenu(){
  AddingStudent();
  while(true){
    switch(myAdd){
      case Pause:
        std::cout << "Add a student?[y/n] ";
        std::cin >> sagot;
        std::cin.ignore();
        if(sagot == "y"){
          myAdd = Yes;
        }
        else if (sagot == "n"){
          myAdd = Ayaw;
        }
        else{
          std::cout << "Unknown Input!" << std::endl;
          myAdd = Pause;
        }
        break;
      case Yes:
        AddingStudent();
        myAdd = Pause;
        break;
      case Ayaw:
        myAdd = Pause;
        break;
    }
    if(myAdd == Ayaw)
    {
  //    SampleDisplay();
//      std::cin.get();
      break;
    }
  }
}
