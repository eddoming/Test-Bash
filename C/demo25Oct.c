#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//Reading file I/O
//Same formato for json etc binary file, csv
//FILE *fopen(const char *pathname, const char *mode);
int main(int argc, char *argv){
  //Open a FILE
  //absolute path or "../honors/foo.txt"
  //Permision or existing document. read option
  FILE *f=fopen("foo.txt","w");
  if (f == NULL){
    printf("unable to open file!\n");
  } else {
    printf("Openend the file!\n");
  }
  // to print to a file fprintf
  // int fprintf(FILE *stream, const char *format, ...);
  // man fseek to move in the file
  // fgetpos, fseek, fsetpos, ftell, rewind - reposition a stream
  //Close always the file
  char buffer[1000];
  char *line = fgets(buffer,1000,f);
  while (line!=NULL){
    if (buffer[strlen(buffer)-1] == '\n'){
      buffer[strlen(buffer)-1] ='\0';
    }
    printf("line = %s\n",buffer);
    line=fgets(buffer,1000,f);
  }

  //Extra things
  // size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream);
  //fwrite(&x,Sizeof(int),1,f);
  // because int x=21470000001;
  fclose(f);
}
