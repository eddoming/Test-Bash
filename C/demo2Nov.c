#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int fibonacci(int i){
//  printf("%d\n",i);
  if (i == 0 || i == 1 ){
    return 1;
  } else {
    return fibonacci(i-1)+fibonacci(i-2);
  }
}
int main(int argc, char **argv){
  //Extra care, if we use recursion we don really see all the posible options
  //We can expend all of our resurces... with care, but I really like writing code in recursion way.
printf("Fibonacci start value\n");
  int n=0;
  //scanf gives a pointer, so we use &
  scanf("%d", &n);
  int result = fibonacci(n);
  printf("Fibonacci results %d\n",result);
  return 0;
}
