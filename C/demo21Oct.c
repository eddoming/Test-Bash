#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//Reading file I/O
//Same formato for json etc binary file, csv
//FILE *fopen(const char *pathname, const char *mode);
int main(int argc, char *argv){
  //Open a FILE
  FILE *f=fopen("myData.txt","r");
  if (f == NULL){
    printf("unable to open file!\n");
  } else {
    printf("Openend the file!\n");
  }

  //Printing to a FILE
  fprintf(f,"Hello World\n");
  int x=21;
  double y=21.1;
  fprintf(f, "valor de x=%d\t valor de y=%f\n",x,y);
  char c = fgetc(f);
  printf("c = %c \n",c);
  c = fgetc(f);
  printf("c = %c \n",c);
  c = fgetc(f);
  printf("c = %c \n",c);
  c = fgetc(f);
  printf("c = %c \n",c);
  c = fgetc(f);

  //The proper way
  while (c != EOF){
    printf("c = %c \n",c);
    c = fgetc(f);
  }

  char buffer[10000];
  char *s = fgets(buffer,10000,f);
  //fgets forgets the \n
  printf("buffer=%s\n", buffer);

  //Printing
  while (s != NULL) {
    printf("buffer=%s\n", buffer);
    s = fgets(buffer,10000,f);
  }
  //Close FILE
  fclose(f);

  return 0;
}
