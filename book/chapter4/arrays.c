#include <stdio.h>
int main(int argc, char const *argv[]) {

  int x[100]; /* this declares a 100-integer array */
  int t;

  /* load x with values 0 through 99 */
  for (t = 0; t < 100; ++t) x[t] = t;

  /* display contents of x */
  for (t = 0; t < 100; ++t) printf("%d ",x[t]);


  // total bytes = sizeof(base type) x size of array

  int count[10], i;
  /* this causes count to be overrun */
  for(i=0; i < 10; i++) count[i] = i;



  return 0;
}
