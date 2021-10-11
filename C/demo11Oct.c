#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argv, char ** argc){
    char fullName[100];
    //We concanete
    strcpy(fullName,"Edgar");
    strcat(fullName," ");
    strcat(fullName,"Dominguez");
    strcat(fullName," ");
    strcat(fullName,"Rosas");
    
    printf("hello %s\n",fullName);
    
    char Name[]="Edgar Dominguez Rosas";
    char shortName[3];
    strncpy(shortName, Name, 2);
    printf("hello %s\n",shortName);
    
    // Copy the lastName only
    char LastName[10];
    strncpy(LastName,&Name[6],9);
    printf("hello %s\n",LastName);
    
    //sprintf
    char result[100];
    sprintf(result,"hello %s\n",LastName);
    printf("%s",result);
    
    //Tokenization strtok
    //char *strtok(char *str, const char *delim);
    char data[]="Edgar,Dominguez,Rosas,546566,CDMX,10 444";
    char *currentToken = NULL;
//     currentToken = strtok(data,",");
//     printf("token=%s\n",currentToken);
//     currentToken = strtok(data,",");
//     printf("token=%s\n",currentToken);
//     currentToken = strtok(data,",");
//     printf("token=%s\n",currentToken);
//     currentToken = strtok(data,",");
//     printf("token=%s\n",data);
    
    currentToken = strtok(data,",");
    while(currentToken != NULL){
            printf("token=%s\n",currentToken);
            currentToken = strtok(NULL, ",");
    }
    
    //Using strcmp
    char a[]="Hello";
    char b[]="Hello";
    if (strcmp(a,b)<0){
        printf("%s comes before %s\n",a,b);   
    } else if (strcmp(a,b)>0){
        printf("%s comes after %s\n",a,b);
    } else {
        printf("equak!\n");
    }
    
    
    
    return 0;
}
