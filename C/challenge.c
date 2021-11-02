#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void CountDown(int i){

if (i == 0){
  printf("Blast off\n");
} else {
  printf("%d\n",i);
  CountDown(i-1);
}

}
int main(int argc, char **argv){
CountDown(10);
return 0;
}
