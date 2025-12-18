#ifndef student_H
#define student_H

#include <iostream>
#include <cstring>

using namespace std;

class Student{
 public:
  Student(float inGPA, char* inName);
  char* getName();
  float getGPA();

  char* name;
  float gpa;


};

#endif
