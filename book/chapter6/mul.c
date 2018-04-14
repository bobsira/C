#include <stdio.h>
int mul(int a, int b);

int main(void){
  int x, y, z;
  x = 10; y = 20;
  z = mul(x, y); /* 1 */
  printf("%d", mul(x,y)); /* 2 */
  mul(x, y); /* 3 */
  return 0;
}

int mul(int a, int b){
  return a*b;
}
