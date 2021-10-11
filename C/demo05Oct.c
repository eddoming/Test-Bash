#include <stdlib.h>
#include <stdio.h>

int main(){
    int n=3,m=4;
    int **table = (int**) malloc(n*sizeof(int*));
    for (int i = 0;i < n; i++){
        table[i]=(int*)malloc(m*sizeof(int));
    }
    int value=10;
    for (int i = 0;i < n; i++){
        for (int j = 0;j < m; j++){
            table[i][j] = value;
            value +=10;
        }
    }
    //How to remove the memory leak;
    for (int i = 0;i < n; i++){
        free(table[i]);
    }
    free(table);
    
    //Reference
    int t = 5;
    int *a = (int*) malloc(t*sizeof(int));
    for (int i = 0;i < t; i++){
        a[i]=(i+1)*10;
    }
    int *b = a;
    a[0]=42;
    printf("Valor of b[0]=%d\n",b[0]);
    
    //We have the Deep copy in C, we copy only the memory;
    //With int *c *arr
    //memcpy(c,arr, n*sizeof(int)); // We need the String.h library
    //You can cheese the compiler with a const int *arr
    // and we use int * b = arr;
    //and then b[0]=42; 
    return 0;
}
