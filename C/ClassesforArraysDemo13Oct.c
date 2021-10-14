#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int dotProduct(int *a,int *b,int n, int *result){
    if (a == NULL || b == NULL || result == NULL || n<0){
     return 1;   
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i]*b[i];
    }
    *result=sum;
    return 0;
}

int *filterPositive(int *a,int n, int *NewSize){
    if (a == NULL || NewSize == NULL || n<0){
     return NULL;   
    }
    
    int numPositive=0;
    for(int i=0;i<n;i++){
        if (a[i]>0){
         numPositive++;   
        }
    }
    //Creating new arry with malloc;
    int *arrayPositive=(int*)malloc(numPositive*sizeof(int));
    int counter=0;
    for(int i=0;i<n;i++){
        if (a[i]>0){
         arrayPositive[counter]=a[i];   
         counter++;   
        }
    }
    *NewSize=counter;
    return arrayPositive;
}
