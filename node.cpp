#include <iostream>
#include "node.h"

using namespace std;

//constructor, adds student to node
Node::Node(Student* inStudent){
  student = inStudent;
  nextNode = NULL; //when first creating
}

Student* Node::getStudent(){
  return student;
}

Node* Node::getNext(){
  return nextNode;
}

void Node::setNext(Node* inNext){
  nextNode = inNext;
}

Node::~Node(){
  //delete student pointer!
  delete student;
}
