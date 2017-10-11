#include <stdio.h>

int a= 0;

void f(void){
  a++;
  printf("a: %d\n", a);
}

int main(void){
  f();
  printf("[Main]a: %d\n", a);

  return 0;
}
