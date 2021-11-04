#include <stdlib.h>
#include <stdio.h>
#include <string.h>

long fibonacciMemory(int n, long *cache){
if (n<1){
  return -1;
} else if (cache[n] != -1){
  return cache[n];
} else {
  long a = fibonacciMemory(n-1,cache);
  long b = fibonacciMemory(n-2,cache);
  long result = a+b;
  cache[n] = result;
  return result;
}

}

long fibonacci(int i){
//  printf("%d\n",i);
  if (i == 0 || i == 1 ){
    return 1l;
  } else {
    return fibonacci(i-1)+fibonacci(i-2);
  }
}

long fibonacciIterative(int n){
  int prev = 1;
  int curr = 1;

  for (int i = 1; i < n; i++){
    int temp = prev + curr;
    prev = curr;
    curr = temp;
  }
  return curr;
}
int main(int argc, char **argv){
  //Extra care, if we use recursion we don really see all the posible options
  //We can expend all of our resurces... with care, but I really like writing code in recursion way.
printf("Fibonacci start value\n");
  int n=0;
  //scanf gives a pointer, so we use &
  scanf("%d", &n);
  long result2 = fibonacciIterative(n);
  printf("Fibonacci results interative %ld\n",result2);

  long result = fibonacci(n);
  printf("Fibonacci results %ld\n",result);

  long *cache = (long*)malloc(sizeof(long)*n);
  for (int r = 0; r < n+1; r++){
      cache[r]=-1;
  }
  cache[1]=1;
  cache[2]=1;
  long result3 = fibonacciMemory(n,cache);
    printf("Fibonacci results hybrid %ld\n",result3);
  free(cache);
  return 0;
}
