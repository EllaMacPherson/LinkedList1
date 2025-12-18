#include "student.h"
#include <iostream>
#include <cstring>


//constructur
Student::Student(float inGPA, char* inName){
  gpa = inGPA;
  name = new char[20];
  strcpy(name, inName);
}

char* Student::getName(){
  return name;
}

float Student::getGPA(){
  return gpa;
}


