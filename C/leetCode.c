#include <stdlib.h>
#include <stdio.h>
int main(){
  int x=127;
  int residuo=0;
  int newnum=0;
   while(x!=0){
      residuo=x%10;
      x-=residuo;
      x/=10;
      newnum*=10;
      newnum+=residuo;
   }
  printf("%d\n",newnum);
  return 0;
}

bool isPalindrome(int x){
    if (x<0){
        return false;
    }
    int xcopy=x;
    int residuo=0;
    int long newnum=0;
    while(x!=0){
      residuo=x%10;
      x-=residuo;
      x/=10;
      newnum*=10;
      newnum+=residuo;
   }
    if (xcopy==newnum){
        return true;
    }
    return false;
}
int romanToInt(char * s){
    
int i=0;
int integer=0;
while(s[i]!='\0'){
    if(s[i]=='I'){
        if (s[i+1]=='V'){
            integer+=4;
            i+=2;
            continue;
        }
        if (s[i+1]=='X'){
            integer+=9;
            i+=2;
            continue;
        }
        integer+=1;
        i+=1;
        continue;
    }
    if(s[i]=='V'){
        integer+=5;
        i+=1;
        continue;
    }

    if(s[i]=='X'){
        if (s[i+1]=='L'){
            integer+=40;
            i+=2;
            continue;
        }
        if (s[i+1]=='C'){
            integer+=90;
            i+=2;
            continue;
        }
        integer+=10;
        i+=1;
        continue;
    }
    if(s[i]=='L'){
        integer+=50;
        i+=1;
        continue;
    }

    if(s[i]=='C'){
        if (s[i+1]=='D'){
            integer+=400;
            i+=2;
            continue;
        }
        if (s[i+1]=='M'){
            integer+=900;
            i+=2;
            continue;
        }
        integer+=100;
        i+=1;
        continue;
    }
    if(s[i]=='D'){
        integer+=500;
        i+=1;
        continue;
    }

    if(s[i]=='M'){
        integer+=1000;
        i+=1;
        continue;
    }

}

    return integer;
}
