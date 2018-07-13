#include <stdio.h>
int main(int argc, char const *argv[]) {
  int LA[] = {1,3,5,7,8};
  int item = 10, k =3, n=5;
  int i =0 , j = n-1;

  printf("The original array elements are :\n");
  for ( i = 0; i < n; i++) {
    printf("LA[%d]= %d\n",i,LA[i] );
  }

  //insertion from here
  n = n + 1; // increased array size
  while (j >= k ) {
    LA[j+1]  = LA[j];
    j--;
  }

  LA[k] = item;

  printf("The elements of the array after insertion are :\n");
  for ( i = 0; i < n; i++) {
    printf("LA[%d]= %d\n",i,LA[i] );
  }

  return 0;
}
