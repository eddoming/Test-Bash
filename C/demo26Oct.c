#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "student.h"
//Struct, Computer science honors https://www.youtube.com/watch?v=QnqmDyQFN3A

int main(int argc, char *argv){
  // Student me;
  // me.firstname = (char *) malloc(sizeof(char) *6);
  // strcpy(me.firstname,"Edgar");
  // me.lastname = (char *) malloc(sizeof(char) *6);
  // strcpy(me.lastname,"Rosas");
  // me.newID = 54545;
  // me.gpa = 3.5;
  // me.year = SENIOR;
  // me.dateofBirth.year =2020;
  // me.dateofBirth.month =7;
  // me.dateofBirth.day =9;

  //TODO a better way
  //Problems
  Student *jane =constructorStudent(1234,"Jane","Bourke",FRESHAMN,4.0,2020,10,4);
  return 0;
}
