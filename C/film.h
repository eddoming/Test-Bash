#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// #include "student.h"
//Encapsulation
//Grouping, protection and funcionallity
//Modeling film
typedef struct{
  int year;
  int month;
  int day;
} Date;
//Time Unix time
//ISO 8661

typedef struct {
  char *firstName;
  char *lastName;
  Date dateofBirth;
} Person;

typedef struct {
  char *EIDR;//We prefer lowercast
  char *title;
  Person director;
  double imdbRating;
} Film;//Always No lowercast

//constructor
//In the heap, dynamic
Film *creatFilm(const char *EIDR,const char *title, Person director, double imdbRating);
void printFilm(const Film *f);
char *printFilmString(const Film *f);
