#include <stdlib.h>
#include <stdio.h>
//https://www.youtube.com/watch?v=ecvFkVgI7UM  Dr Chris Bourke
int main(int argc, char *argv){

    //Static array have limit size, Segmentation fault (core dumped) for higher numbers
// // //     int arr[100000000];
// // //     for (int j=0;j<100000000;j++){
// // //         arr[j]=(j+1);   
// // //     }
// // //     //Solution is Dynamic arrays
// // //     //void * malloc(size_t n)
// // //     //
// // //     return 0;
    //int * malloc(10 * int) int are 4  //int * malloc(10 * sizeof(int))
    //double * malloc(10 * double) double are 8
// // // //     int n =100;
// // // //     int *arr = (int*)malloc(n*sizeof(int));
// // // // //     int *arr = (double*)malloc(n*sizeof(double));
// // // //     if (arr == NULL){
// // // //             printf("error: unable to allocate memory\n");
// // // //     }
// // // //     int sum=0;
// // // //     for (int j=0;j<n;j++){
// // // //         arr[j]=(j+1);   
// // // // //         printf("arr[%d]= %d\n",j,arr[j]);
// // // //         sum+=arr[j];
// // // //         printf("sum= %d\n",sum);
// // // //     }
// // // //     //Carefull, memory leak if you do not remove that memory. free(arr)
// // // //     //Solution is Dynamic arrays
// // // //     //void * malloc(size_t n)
// // // //     free(arr);
// // // //     return 0;
    
    //TODO in Java Dynamics array
//     int arr[]= new int[10];
//     double numbers[] = new double[20];
    //TODO example of memory, using valgrind and gdb to see memory lost
    int i = 0;
    int n = 1000;
    while(i<n){
        int *arr = (int*)malloc(n*sizeof(int));
        i++;
    }

    return 0;
}

