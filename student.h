
 
 #include <iostream>
 #include <cstring>

 class Student {

  public:
   student(char*);
   char* getName();
   ~Student();

   char* name = new char[25];
   
 }
