#include "student.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
Student *constructorStudent(int newID,
                            const char *firstname,
                            const char *lastname,
                            Year year,
                            double gpa,
                            // int Dateyear,
                            // int Datemonth,
                            // int Dateday){
                            Date dateofBirth){
    Student *s;
    // Structur .
    // Structur pointer ->
    s = (Student *) malloc(sizeof(Student)*1);

    initStudent(s, newID, firstname, lastname, year, gpa, dateofBirth);

    // s->dateofBirth.year=Dateyear;
    // s->dateofBirth.month=Datemonth;
    // s->dateofBirth.day=Dateday;
    return s;
}
void printStudent(const Student *s) {
  // we can use %08 to prints 0 fpr the space digits
  // printf("%s, %s (%d), Date year %d \n",s->lastname,s->firstname,s->newID, s->dateofBirth.year);
  // return 0;
  char *str = studenttoString(s);
  printf("%s\n",str);
  free(str);
}

void initStudent(Student *s,
                  int newID,
                  const char *firstname,
                  const char *lastname,
                  Year year,
                  double gpa,
                  Date dateofBirth){

    s->newID=newID;
    //We can change top
    // s->lastname = strdup(firstname);
    s->firstname = (char *)malloc(sizeof(char)*(strlen(firstname)+1));
    strcpy(s->firstname,firstname);
    s->lastname = (char *)malloc(sizeof(char)*(strlen(lastname)+1));
    strcpy(s->lastname,lastname);
    s->year =year;
    s->gpa=gpa;
    s->dateofBirth=dateofBirth;

                    }
char *studenttoString(const Student *s){
  char str[1000];
  sprintf(str,"%s, %s (%d), Date year %d \n",s->lastname,s->firstname,s->newID, s->dateofBirth.year);
  return strdup(str);
  // return str;
}
void printRoster(Student **s, int n){
  for (int i=0;i<n;i++){
    printStudent(s[i]);
  }
}
