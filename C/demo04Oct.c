#include <stdlib.h>
#include <stdio.h>
//Memory leaks
// // https://www.youtube.com/watch?v=mE4iSfuZM8s&t=33s
int sum(int *arr, int n){
    int total=0;
    for (int i=0;i<n;i++){
       total += arr[i];
    }
    return total;
}
//TODO New function;
int * getOneArray(int n){
    if (n<0){
        return NULL;
    }
    //Create array of size n;
    int * arr=(int *)malloc(sizeof(n)*n);
    for(int i=0;i<n;i++){
        arr[i]=0;
    }
    return arr;
}
//TODO new function get positve and retun in an array;
int * getPositive(int *arr, int n, int *sizeofresults){
    int numPos=0;
//     int j=0;
    for(int i=0;i<n;i++){
        if (arr[i]>0){
            numPos++;
        }
    }
    int *brr=(int*) malloc(numPos*sizeof(int));
    int indexResult=0;
    for(int i=0;i<n;i++){
        if (arr[i]>0){
            brr[indexResult]=arr[i];
            indexResult++;
        }
    }
    *sizeofresults=indexResult;
    return brr;

}
int main(int argc, char **argv){
    int n=10;
    int *arr;
    for (int i=0;i<n;i++){
        arr=(int*)malloc(n*sizeof(int));
        free(arr);
    }


    int *brr=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        brr[i]=(i+1)*10;
    }
    int primes[]={2};
    int total = sum(brr,n);
    printf("Total value %d\n",total);
    free(brr);

    brr=getOneArray(n);
    free(brr);

    int crr[]={2, 3, 4, -7, 6, -8, 7, 4,-5,-7};

    int sizeofresults;
    int *drr=getPositive(crr,n,&sizeofresults);
    //ALERT Debugging with gdb
    /* We start with gdb a.out
     * then we add a breakpoint like getPositive (break getPositive)
     * Now we use (run) to keep moving
     * We Use (layout next) to keep use of the info
     * We can use (print variable) will give teh refrence memory
     * We can use (print *variable) will give the valor
     * We can use (print *variable@9) for an array of size 9
     */
    //TODO we can declare matrix
    int l=3;
    int m=5;
    //array of pointer
    int **Matrix=(int **) malloc(l*sizeof(int*));
    for(int i=0;i<l;i++){
        Matrix[i]=(int *) malloc(m*sizeof(int));
    }
    //Set Values in teh matrix
    int v=10;
    for (int x=0;x<l;x++){
        for (int y=0;y<m;y++){
            Matrix[x][y]=v;
            v+=10;
        }
    }
    //I need to use free();
    //TODO, need to make and for to free every Matrix[i], and then Free Matrix
    return 0;
}
