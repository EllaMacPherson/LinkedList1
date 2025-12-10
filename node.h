#ifndef nodeh
#define nodeh

#include <iostream>
#include "Student.h"
#include <cstring>

class Node{
public:
  Node(Student*); //constructor basically setting student too
  Node* getNext(); //get next node pointer
  Student* getStudent(); //get student pointer FOR STUDENT AT THIS NODE?
  void setNext(Node*); //set the next node pointer
  
  ~Node(); //destructor do last lol

  Student* student; //student linked to this node 
  Node* nextNode; //next node linked to THIS node
};

#endif
