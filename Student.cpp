#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
void Student::assignDetails(int no, char name[]) {
  studentId = no;
 // name[] = Name;
}

// Display StudentId and Name
void Student::display() {
  cout << "Student ID is " << studentId << " and name is " << name << endl;
}
