
 #include <iostream>
 #include <cstring>
 #pragma once

 class Student {
  public:
   Student(char*); // Constructor for the student
   char* getName(); // Getting the students name
   ~Student(); // Destructor for the student
   char* name = new char[25];
 };
