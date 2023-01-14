
 #pragma once
 #include <iostream>
 #include <cstring>
 #include "Student.h"
 using namespace std;

 class Node{
  public:
   Node(Student*);
   Node* getNext();
   Student* getStudent();
   void setNext(Node*);
   ~Node();

   Student* nextStu;
   Node* nextPointer;

 };
 
