#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(){
 //Copy to a char variable
    char message[100];
    int a=10;
    double b=20.32;
    char name[]="Edgar";
    //sprintf did not print the message, it send to the char variable, (like | in bash?)
    sprintf(message,"My name is %s, number %d and float %f\n",name,a,b);
    //printf("My full message=%s\n",message);
    
    //We return to strtok from from tokenizing
    char data[]="Edgar,Dominguez,Rosas,444,CDMX,blabla";
    char *token =strtok(data, ",");
    //char *token =strtok(data, ","); I can use "0o,"
    //and will cut in single character
    //printf("Token = %s\n",token);
    while (token!=NULL){
        printf("Token = %s\n",token);
        token = strtok(NULL, ",");
    }
    
    //Comes before or after Capital first then minus, ASCII format
    char t[]="apple";
    char r[]="orange";
    if (strcmp(t,r)>0){
        printf("%s comes first than %s\n",r,t);
    } else if (strcmp(t,r)<0){
        printf("%s comes first than %s\n",t,r);
    } else {
        printf("Equal!\n");
    }
    
    
    return 0;
}
