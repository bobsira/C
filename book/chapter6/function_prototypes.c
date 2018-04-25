#include <stdio.h>

/* This program uses a function prototype to
enforce strong type checking. */
void sqr_it(int *i); /* prototype */

/* This definition will also serve
as a prototype within this program. */
void f(int a, int b){
  printf("%d ", a % b);
}

int main(int argc, char const *argv[]) {
  /* code */
  int x;
  x = 10;
  sqr_it(x); /* type mismatch */
  f(10,3);
  return 0;
}

void sqr_it(int *i){
  *i = *i * *i;
}
