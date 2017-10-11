#include <stdio.h>

int main(void){
  int sales[3];

  sales[0] = 200;
  sales[1] = 100;
  sales[2] = 400;

  int sales2[] = {200, 40, 300};

  printf("%d\n", sales2[1]);
  return 0;
}
