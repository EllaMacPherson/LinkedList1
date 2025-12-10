#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

int main(){

  Node* current; //idk if i need but maybe to keep track

  //pretend they select ADD
  float inGPA = 0;
  char inName[15];
  
  cout<<"GPA of student?";
  cin>>inGPA;
  cin.ignore();
  cout<<"Name of student?";
  cout<<"RUNG"<<endl;
  cin.get(inName, 14);
  cin.ignore();
  //OKAY THIS WORKS, NOW CHECK IF WHEN U PRINT IT OUT IT WORKS, AND ALL FUNCTIONALITY AROUND THAT
 //create node1, with student pointer of
  Student* s = new Student(inGPA, inName);
  Node* node1 = new Node(s);

  cout<<
  

  
  return 0;

}
