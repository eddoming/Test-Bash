//Notes of arrays Static and Dynamic
#include <stdlib.h>
#include <stdio.h>
int main(){
//Declare arrays
    int arr[100];
    int x;
    int brr[20];
//We need always initialize the values,will be garbage
    for (int i=0;i<=100;i++){
        //ALERT we can go to 100, using more memory I did not request (stack memory)
        printf("arr[%d] = %d\n",i ,arr[i]);
    }
    arr[2]=3.5;//Truncation
    //Declare
    int primes[]={2,3,5,7,11,13,17,19,23,29};
    //Bookkepping
    //sum of the 10 terms
    int sum =0;
    int n = 10;
    for (int i =0;i<n;i++){
        sum+=primes[i];
    }
    printf("The valor of the first 10 primes is %d\n",sum);
    
    sum=0;
    //if k=10,000,000 Segmentation fault;
    int k=10000;
    int crr[k];
    for (int i =0;i<k;i++){
        crr[i]=i+1;
        sum+=crr[i];
    }
    printf("The valor of the first 10 numbers is %d\n",sum);
    
    //We need to alocate memory with malloc;
//     int* sumBigger=(int*)malloc(sizeof(int)*10);
//     sumBigger=0;
    //ALERT Here I learn soemthing very usefull I can allocate more memory for values, but not increase the size of the class (int 4, souble 8) so if the number I use is bigger tan 4 bytes for the integer then I have to change, if I aloccate I will have the same problem.
    long long sumBigger=0;
    int l=10000000;
    //Dynamic array
    int *drr=(int *) malloc(sizeof(int) * l);
    for (int i =0;i<l;i++){
        drr[i]=(i+1);
        sumBigger+=drr[i];
    }
     printf("The valor of sum is %lld\n",sumBigger);
    free(drr);
    return 0;
}
