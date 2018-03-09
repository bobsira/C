#include <stdio.h>
   /* A two-dimensional array can be reduced to a pointer to an
   array of one-dimensional arrays.
   */
   int num[10][10];
   void pr_row(int j) {
     int *p, t;
     p =(int *) &num[j][0]; /* get address of first element in row j */
     for(t=0;t<10;++t) printf("%d ", *(p+t));
   }
   void pr_row(int j, int row_dimension, int *p) {
     int t;
     p = p + (j * row_dimension);
     for(t=0;t<row_dimension;++t) printf("%d ", *(p+t));
   }
   void f(/* arguments */) {
     /* code */
     int num[10][10];
     pr_row(0,10,(int *) num); /* print first row */
   }
int main(int argc, char const *argv[]) {

  /*an array name without an index is a pointer to the first element in the array*/
  char p[10];
  // p == &p[0] address of the first element of an array is the same as the address of the array

 /*a pointer can be indexed as if it were declared to be an array*/
 int *p, i[10];
 p = i;
 p[5] = 100;  /* assign using index */
 *(p+5) = 100; /* assigns using pointer arithmetic */
 //Both assignment statements place the value 100 in the sixth element of i

 /*arrays of two of more dimensions*/
 int a[10][10];
 // a == &a[0][0]
 /*Referencing*/
 a[0][4] == *((int *)a+4);
 a[1][2] == *((int *)a+12);
  return 0;
}
