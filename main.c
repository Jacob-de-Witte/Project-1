#include <stdio.h>



int main (){
  int temp, i;
  int k = 6;
  char I[65];
  for (i=65; i<91; i++){
  temp = i-65;
  temp = (temp + k) %26;
  printf("%c %d, %c\n", i, temp, temp+65);
  }
  return 0;
}

