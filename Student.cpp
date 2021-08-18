#include "Student.h"
#include <iostream>
#include <string.h>
using namespace std;

// Assign studentId and name
 void Student::assignDetails(int sId, char sname []){
   studentId = sId;
   strcpy(name,sname);
 }
  

// Display StudentId and Name
void Student::display() {
  cout<<"Student ID is: " << studentId << endl;
  cout<<"Student name is: " << name<< endl;
}
