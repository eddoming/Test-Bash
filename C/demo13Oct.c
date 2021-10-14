#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//Different what to complie, with gcc -Wextra
//clang --analyze foo.c
//infer capture -- gcc foo.c later: infer analyze
//Dynamic Analysis Tools
// To run GDB use: gdb a.out
// To run your program: run
// To view your source code you can use layout next
// Sometimes it screws up, just type: refresh 
// You can set a function breakpoint: break main
// You can set a line breakpoint: break 12
// You can set a line breakpoint in another file: break file.c:26
// You can clear a breakpoint by using clear main or clear 12
// You can resume the program with continue
// You can view the value stored in a variable using print variableName
// Halt: control-C
// Continue: continue
// Watch a variable: watch total
// Redraw: 
// refresh
// set arguments: set args a b c
// Conditional break: break 10 if x == 21
#include "ClassesforArraysDemo13Oct.h"
//gcc -c ClassesforArraysDemo13Oct.c
//gcc ClassesforArraysDemo13Oct.o demo13Oct.c
int main (int argv, char ** argc){
    int n=5;
    int arr[]={-2,5,3,2,1};
    int brr[]={9,4,8,0,-2};
    int result;
    int errorCode=dotProduct(arr,brr,n,&result);
    
    printf("Error code=%d\n",errorCode);
    printf("Dot product result=%d\n",result);
    
    //filter for positive array;
    int NewSize;
    int *aPositive=filterPositive(arr,n,&NewSize);
    for (int i=0;i<NewSize;i++){
          printf("Positive array=%d\n",aPositive[i]);
    }
//        printf("Dot product result=%d\n",result);
    
  return 0;
}
