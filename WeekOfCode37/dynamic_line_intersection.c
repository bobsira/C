#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  /* code */
  long n,k,b,q;
  char operation;
  long lines[100000][2];
  /* input n */
  scanf("%ld",&n);
  for (size_t i = 0; i < n; i++) {
    scanf("%c", &operation);
    if (operation=='+') {
      scanf("%ld",&k);
      scanf("%ld",&b);
      /* look for an empty slot in an array and insert a line */
      for (size_t j = 0; j < 100000; j++) {
        if (lines[j][0] == 0) {
          lines[j][0]= k;
          lines[j][1]= b;
          break;
        }

      }
    }
    if (operation=='-') {
      scanf("%ld",&k);
      scanf("%ld",&b);
      /* remove a line from the lines array */
      for (size_t j = 0; j < 100000; j++) {
        if (lines[j][0]==k && lines[j][1]==b) {
          lines[j][0]= 0;
          lines[j][1]= 0;
          break;
        }
      }

    }
    if (operation=='?') {
      scanf("%ld",&q);
      int max = 0;
      for (size_t j = 0; j < 100000; j++) {
        /* perform the query processing  */
        double results = ( (double) q - (double) lines[j][1] ) / (double) lines[j][0];
        if ((long)results % 1 == 0) max++;
      }
      printf("%d\n",max);
    }
  }
  return 0;
}
