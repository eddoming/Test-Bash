#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "film.h"
// #include "student.h"
//Encapsulation
//Grouping, protection and funcionallity

int main(int argc, char **argv){
  Film dune;
  Film dune2;
  // . dot means to the variable, if was a reference we use ->
  dune.title = (char *) malloc(sizeof(char)*(4+1));
  //Deep copy string, we need or we use strdup
  strcpy(dune.title,"Dune");
  dune2.title = strdup("Dune");
  dune.EIDR =strdup("1234ABCD");
  dune.imdbRating= 10.0;
  dune.director.firstName = strdup("Denis");
  dune.director.dateofBirth.year = 1970;
  dune.director.dateofBirth.month= 1;
  dune.director.dateofBirth.day= 1;

  free(dune.title);
  free(dune.EIDR);
  free(dune.director.firstName);
  free(dune2.title);
  //Now with our constructor
  // But first we need the director
  Person denis = {
      "Denis",
      "Villenueve",
      {
        1970, 1, 1
      }
    };

    Film *dune3 = creatFilm("1234ABCD","Dune",denis,10.0);
    printFilm(dune3);

    free(dune3->EIDR);
    free(dune3->title);
    // free(dune3->director.lastName);
    free(dune3);

    Film *arrival= creatFilm("1234ABCD","Arrival",denis,10.0);
    Film *dunev4= creatFilm("2234ABCD","Dune",denis,10.0);
    Film *bladerunner= creatFilm("3234ABCD","BaldeRunner2045",denis,10.0);

    //Here we alocate memory here, and we pass woth the "&" to pass a pointer
    Film *arr=(Film *)malloc(sizeof(Film)*3);
    initFilm(&arr[0],"1234ABCD","Arrival",denis,10.0);
    initFilm(&arr[1],"2234ABCD","Dune",denis,10.0);
    initFilm(&arr[2],"2234ABCD","bladerunner",denis,10.0);

    //TODO
    //printFilms(arr,3);

    Film **films = (Film **) malloc(sizeof(Film *)*3);
    films[0]=arrival;
    films[1]=dunev4;
    films[2]=bladerunner;
    //We can doit better with and array of film, double pointers

    // arr[0]=*arrival;
    //there is a better option with

    //Still we will have a memory leak, because we allocate Dynamics arrays.
    // Correction, it is not necesarry to free aditional memory in the other
    // Struct of Person firstName or lastName, only in the main struct you malloc
    //To run
    //gcc -c film.c
    //gcc film.o demo27Oct.c

  return 0;
}
