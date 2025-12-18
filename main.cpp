#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

//PRINTING AND ADDING WORKS!!!! test destructor for ONE ITEM and set head to NULL right after manually. also switching head to a NOT global variable

using namespace std;

void add(Node*& head, Student* student);
void print(Node*& head, Node* next);
void Delete(Node*& , Node* next, float GPA);



int main(){

  char input[10];
  bool go = true;

  Node* head = NULL;

  while (go == true){
    input[0] = '\0';
    cout<<"ADD?"<<endl;
    cin>>input;
    cin.ignore();
    if(strcmp(input, "ADD") == 0) {

      float inGPA = 0;
      char inName[15];
  
      cout<<"GPA of student?";
      cin>>inGPA;
      cin.ignore();
      cout<<"Name of student?";
      cin.get(inName, 14);
      cin.ignore();
      
      //create student pointer to assign to this node
      Student* s = new Student(inGPA, inName);

      add(s);
      
    
    }
    if(strcmp(input, "PRINT") == 0){
      print(head);
    }
    if(strcmp(input, "DELETE") == 0){
      cout<<"Enter GPA to delete"<<endl;
      float inGPA = 0;
      cin>>inGPA;
      
      Delete(head, inGPA);
    }
  }
    //need to define new student UP HERE!! dummy
  
  
  return 0;

}

void add(Student* student){
  Node* current = head;
  
  if(current == NULL){
    //go ahead and add
    cout<<"ADDING"<<endl;
    head = new Node(student);
    cout<<"added: "<<endl;
    cout<<head->getStudent()->getName()<<endl;
  }else{
    //when the current node is NOT the last one on the list
    while(current->getNext() != NULL){
      current = current->getNext();
    }
    //when the next thing is null, set the 
    current->setNext(new Node(student));
    
    
  }


}
void print(Node* next){
  if(next == head){ //on first one print 
    cout<<"List: ";
  }

  if(next != NULL){ //if we ar not at last one in list
    cout<<next->getStudent()->getName()<<" ";
    print(next->getNext());
  }

}

//only works for 1 unique #, currently testing that case.

//ONLY NEED DELETION OF 1 ITEM IN LIST to prove destructors work
void Delete(Node* next, float GPA){
  //  Node* current = head;
  if(next == head){
    cout<<"Matches found: ";
  }

  if(next == NULL){
    cout<<"No students currently in list"<<endl;
    return;
  }

  if(next->getStudent()->getGPA() == GPA){
    cout<<next->getStudent()->getName()<<" " <<endl;
    delete next;
    head == NULL;
    return;
  }
  Delete(next->getNext(), GPA);
}
//test delete
