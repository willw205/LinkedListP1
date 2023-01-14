
 #include <iostream>
 #include <cstring>
 #include "Student.h"
 using namespace std;

 Student::Student(char* name1) {
   strncpy(name, name1, 20);  
 }

 char* Student::getName() {
   return name; 
 }

 Student::~Student() {
  delete name;
 }
