#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "film.h"

Film *creatFilm(const char *eidr, const char *title,Person director, double imdbRating){

  Film *f=(Film *)malloc(1*sizeof(Film));
  //We use the -> because we have a pointer, we use . if it is not a
  //or we can use *f., but the hierch we use (*f.)
  f->EIDR=strdup(eidr);
  f->title = strdup(title);
  f->imdbRating = imdbRating;
  f->director = director;
  printf("Film have been created\n");
  return f;
}

// void printFilmToFile(const Film *f,file document){
//   fprintf("%s directed by %s, %s (%.2f)\n",
//   f->title,
//   f->director.lastName,
//   f->director.firstName,
//   f->imdbRating);
// }
char *printFilmString(const Film *f){
  char s[1000];
  sprintf(s,"%s directed by %s, %s (%.2f)\n",
  f->title,
  f->director.lastName,
  f->director.firstName,
  f->imdbRating);
  char *Result = strdup(s);
  return Result;
}
void printFilm(const Film *f){
  printf("%s directed by %s, %s (%.2f)\n",
  f->title,
  f->director.lastName,
  f->director.firstName,
  f->imdbRating);
}
void initFilm(Film *f,const char *EIDR,const char *title, Person director, double imdbRating){
  f->EIDR=strdup(EIDR);
  f->title = strdup(title);
  f->imdbRating = imdbRating;
  f->director = director;

}
void printFilms(const Film *f,int n){
for (int i=0;i<n;i++){
  printFilm(&f[i]);
}

}
//One leve for const, so we can not use function with the same name...
void printFilmsv2(Film **f,int n){
for (int i=0;i<n;i++){
  //We don call the & because we are in a doble pointer, we don need that
  printFilm(f[i]);
}

}
