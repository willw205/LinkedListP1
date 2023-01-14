
 #include <iostream>
 #include <cstring>
 #include "Student.h"
 #include "Node.h"
 using namespace std;

 int main() {

   char* name = new char[25];

   //Making new students below

   strncpy(name, "Willy", 20);
   Student* willy = new Student(name);

   //Assigns student to new node
   
   Node* node = new Node(willy);

   strncpy(name, "Billy", 20);
   Student* billy = new	Student(name);
   Node* node1 = new Node(billy);

   strncpy(name, "Pilly", 20);
   Student* pilly = new	Student(name);
   Node* node2 = new Node(pilly);

   //Sets to next node

   node->setNext(node1);
   node1->setNext(node2);
   node2->setNext(NULL);

   //Printing out
   
   cout << "Name1: " << node->getStudent()->name << endl;
   cout << "Name2: " << node->getNext()->getStudent()->name << endl;
   cout << "Name3: " << node1->getNext()->getStudent()->name << endl;

   return 0;
   
 }

