#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*Continuacion de Char and Char*(string)
 * gcc demo07Oct.c -Wall -g la opcion g guarda la informacion de las lineas
 * para poder debugiar con valgrind.
 * valgrind --leak-check=full ./a.out
 */
char *stringCopy(char *s){
    int n=strlen(s);
    //alocate enought space
    char *copy=(char *) malloc(sizeof(char)*(n+1));
    strcpy(copy,s);
    return copy;
}
int main(int argv, char **argc){
    const char *s = "hello";
    char c = (char) 7;
    //  s[0]='H';
    printf("%c\n",c);
    
    char *S = "A";//String
    char C= 'A';//Character
    
    char  fullName[100];
    strcpy(fullName,"Christopher");
    int nn=strlen(fullName);
    
    printf("My name has %d characters\n",nn);
    
    //Create a deep copy of my name;
    char *copy = stringCopy(fullName);

    printf("fullName=%s\n",fullName);
    printf("c=%s\n",copy);
    
    //   free(copy);//We correct the memory leak.
    
    //  strcat(destination,source);
    /* Note
    * char team[]="Pumas Unam"; char shortTeam[100]
    * team is a char*
    * team[9] is a char
    * &team[9] is a char*, phase shift
    */
    return 0;
}
