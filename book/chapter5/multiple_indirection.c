#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  float **newbalance;
  int x, *p, **q;
  x = 10;
  p = &x;
  q = &p;
  printf("%d\n", **q); /* print the value of x */
  return 0;
}
