#include <stdio.h>

void f(void){
  static int a = 0;
  a ++;
  printf("a: %d\n", a);
}

int main(void){
  f();
  f();
  f();
  f();

  return 0;
}
