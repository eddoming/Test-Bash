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
  Date d = {2020,10,4};
  Student *jane =constructorStudent(1234,"Jane","Bourke",FRESHAMN,4.0,d);
  Student *jone =constructorStudent(1235,"Jone","Bourke",FRESHAMN,4.0,d);
  Student *jale =constructorStudent(1236,"Jale","Bourke",FRESHAMN,4.0,d);
  printStudent(jane);

  // Student r[3];
  // Student *r = (Student *)malloc(sizeof(Student)*3);
  // we need to direfence to copy using a * for the reference
  // r[0]=*jane;
  // r[1]=*jone;
  // r[2]=*jale;
  int n=3;
  Student **r =(Student**)malloc(sizeof(Student*)*n);

  r[0]=jane;
  r[1]=jone;
  r[2]=jale;

  printRoster(r,3);

  free(jane->firstname);
  free(jane->lastname);
  free(jane);
  return 0;
}
