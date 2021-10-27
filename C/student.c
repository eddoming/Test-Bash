#include "student.h"
#include <string.h>
#include <stdlib.h>
Student *constructorStudent(int newID,
                            cont char *firstname,
                            cont char *lastname,
                            Year year,
                            double gpa,
                            int Dateyear,
                            int Datemonth,
                            int Dateday){
                            // Date dateofBirth)
    Student *s;
    // Structur .
    // Structur pointer ->
    s->newID=newID;
    s = (Student *) malloc(sizeof(Student)*1);
    s->firstname = (char *)malloc(sizeof(char)*(strlen(firstname)+1));
    strcpy(s->firstname,firstname);
    s->lastname = (char *)malloc(sizeof(char)*(strlen(lastname)+1));
    strcpy(s->lastname,lastname);
    s->year =year;
    s->gpa=gpa;
    // s->dateofBirth=dateofBirth;
    s->Date.year =Dateyear;
    s->Date.month =Datemonth;
    s->Date.day =Dateday;
}
