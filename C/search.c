#include <string.h>
#include <stdlib.h>

#include "film.h"
#include "search.h"


//Returns the first index
int linearSearch(const int *arr, int n, int key){
  for(int i = 0; i < n; i++){
    if (arr[i] == key){
      return i;
    }
  }
      return -1;
}

int linealSearchFilm(const Film *arr, int n, Film *key){
  // *arr is a pointer ->
  // arr[i] is a think not a pointer .
  // key is a pointer ->
  for(int i = 0; i < n; i++){
    if (strcmp(arr[i].title,key->title)){
      return i;
    } else {
      return -1;
    }
  }
  return -1;
}
int binarySearchRecursive(const int *arr, int left, int right, int key){
if (left > right){
  return -1;
}
int m = (left+right)/2;
if (arr[m] == key){
  return m;
} else if (key < arr[m]){
  binarySearchRecursive(arr, left, m-1, key);
} else if (arr[m] < key){
  binarySearchRecursive(arr, left, m+1, key);
}
// return -1;
}
