#ifndef STUDENT_DATA_H
#define STUDENT_DATA_H

#include <iostream>
#include <string>
#include <vector>

class Subject{
  std::string _subj;
  double m_grade, f_grade;
public:
  std::string GetSubj();
  double GetMgrade();
  double GetFgrade();
  void SetSubj(std::string subj);
  void SetMgrade(double mgrade);
  void SetFgrade(double fgrade);
};

class Student{
  std::string _fname,_mname,_lname;
  std::vector<Subject>_mySubj;
  bool _state;
  double _ave;
  unsigned int _noSubj, _year;
public:
  //Getters
  std::string GetFname();
  std::string GetMname();
  std::string GetLname();
  void GetMySubj();
  bool GetState();
  double GetAve();
  int GetNosubj();
  int GetYear();

  //Setters
  void SetYear(int year);
  void SetFname(std::string fname);
  void SetMname(std::string mname);
  void SetLname(std::string lname);
  void SetMySubj(Subject subj);
  void SetState(bool state);
  void SetAve(double ave);
  void SetNosubj(unsigned int nosubj);
};

#endif
