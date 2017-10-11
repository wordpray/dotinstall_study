#include <stdio.h>

int main(void){
  int m = 1;

  while (m < 10){
    printf("m: %d\n", m);
    m ++;
  }

  int n = 1;

  do{
    printf("n: %d\n", n);
    n ++;
  } while (n < 10);
}
