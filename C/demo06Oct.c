#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//TODO
int * deepCopy(int *arr,int n){
    if (arr == NULL || n<0){
        return NULL;
    }

    int *c=(int*) malloc(sizeof(int)*n);
    if (c==NULL){
        return NULL;
    }

    for (int i=0; i<n; i++){
     c[i]=arr[i];
    }
    return c;
}
//promese not change "const"
char * deepStringCopy(const char * s){
    char *copy = (char*) malloc((strlen(s)+1)*sizeof(char));
    strcpy(copy, s);
//     printf("copy %s\n",copy);
    return s;

}
int main (int argc, char **argv){
// //     int n=0;
// //     int m=0;
// //     int **table = (int **) malloc(sizeof(int *) *n);
// //     for (int i=0;i<n;i++){
// //      table[i]= (int *) malloc(sizeof(int ) *m);
// //      for (int j=0;j<m;j++){
// //          table[i][j]=(i+j+1)*10;
// //      }
// //     }
// // //      free(table);
// //     //Memory leak, I desdtroy the first pointer. I can fix with and a
// //     for (int i=0;i<n;i++){
// //         free(table[i]);
// //     }
// //     free(table);
// //     //Valgrind did not see the memroy leak

// // //     int n=5;
// // //     int *a=(int*) malloc(sizeof(int)*n);
// // //     for (int i=0; i<n; i++){
// // //      a[i]=(i+1)*10;
// // //     }
// // // //     int *b=a;
// // // //     Shallow Copy
// // // //     a[0]=42;
// // // //     printf("b[0]=%d",b[0]);
// // //
// // // //  Deep copy
// // //     int *b=(int*) malloc(sizeof(int)*n);
// // //     for (int i=0; i<n; i++){
// // //      b[i]=a[i];
// // //     }
// // //     a[0]=42;
// // //     printf("b[0]=%d, a[0]=%d \n",b[0],a[0]);

    char message[20] = "Hello World!";
    printf("messsage =%s\n",message);
    message[5]='\0';
    printf("messsage =%s\n",message);
    message[5]='_';
    printf("messsage =%s\n",message);

    int length =5;
    char *messagev2 = (char*) malloc(sizeof(char)*(length+1));
    messagev2[0]='H';
    messagev2[1]='e';
    messagev2[2]='l';
    messagev2[3]='l';
    messagev2[4]='o';
    messagev2[5]=' ';
    printf("messsagev2 =%s\n",messagev2);

    char name[]="Chris";
    strcpy(name,"Joeseph");
//     strncpy(name,name2,4);
    name[4]='\0';
    printf("my name is now %s\n",name);
//Deep copy of a String
    char FullName[]="Christopher";
    char *copy = (char*) malloc((strlen(FullName)+1)*sizeof(char));

    strcpy(copy, FullName);
    printf("copy %s\n",copy);
    printf("Valor de Long %d\n",sizeof(long));
    printf("Valor de Long %d\n",sizeof(int64_t));
return 0;
}
