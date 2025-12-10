#ifndef student_H
#define student_H

#include <iostream>
#include <cstring>

using namespace std;

class Student{
 public:
  Student(float inGPA, char* inName);
  const char* getName();
  float getGPA();

  char name[15];
  float gpa;


};

#endif
