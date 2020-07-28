#include "studentData.h"

//Subject
//Getters
std::string Subject::GetSubj(){
  return _subj;
}
double Subject::GetMgrade(){
  return m_grade;
}
double Subject::GetFgrade(){
  return f_grade;
}

//Setters
void Subject::SetSubj(std::string subj){
  _subj = subj;
}
void Subject::SetMgrade(double mgrade){
  m_grade = mgrade;
}
void Subject::SetFgrade(double fgrade){
  f_grade = fgrade;
}


//Student
//Getters
int Student::GetYear(){
  return _year;
}
std::string Student::GetFname(){
  return _fname;
}
std::string Student::GetMname(){
  return _mname;
}
std::string Student::GetLname(){
  return _lname;
}
void Student::GetMySubj(){
  for(unsigned i = 0; i < _mySubj.size(); i++){
    std::cout << _mySubj[i].GetSubj() << std::endl;
  }
}
bool Student::GetState(){
  return _state;
}
double Student::GetAve(){
  return _ave;
}
int Student::GetNosubj(){
  return _noSubj;
}
//Setters
void Student::SetYear(int year){
  _year = year;
}
void Student::SetFname(std::string fname){
  _fname = fname;
}
void Student::SetMname(std::string mname){
  _mname = mname;
}
void Student::SetLname(std::string lname){
  _lname = lname;
}
void Student::SetMySubj(Subject subj){
  _mySubj.push_back(subj);
}
void Student::SetState(bool state){
  _state = state;
}
void Student::SetAve(double ave){
  _ave = ave;
}
void Student::SetNosubj(unsigned int nosubj){
  _noSubj= nosubj;
}
