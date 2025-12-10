#include <iostream>
#include "node.h"

using namespace std;

Node::Node(Student* inStudent){
  student = inStudent;
}

Student* Node::getStudent(){
  return student;
}

Node* Node::getNext(){

}

void Node::setNext(Node*){

}

Node::~Node(){
  //delete thingS!
}
