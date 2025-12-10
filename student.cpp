#include "student.h"
#include <iostream>
#include <cstring>


//constructur
Student::Student(float inGPA, char* inName){
  gpa = inGPA;
  inName = new char[15];
  strcpy(name, inName);
}

const char* Student::getName(){
  return name;
}

float Student::getGPA(){
  return gpa;
}


