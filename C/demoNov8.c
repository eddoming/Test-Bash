#include <stdio.h>
#include <stdlib.h>
#include "film.h"
#include "search.h"
// #include <std>

int main(int argn,char **argv){

int n = 9;
int numbers[] = {42, 4, 5, 9, 4, 3, 54, 78, 46};
int key = 78;
int indexOf = linearSearch(numbers, n, key);
printf("Hello, the key is = %d \n", indexOf);
  return 0;
}
