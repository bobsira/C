#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void adjacent_arrays_increment(/* arguments */) {
  //A related error results when you assume that two adjacent arrays may be indexed
  //as one by simply incrementing a pointer across the array boundaries. 
  int first[10], second[10];
  int *p, t;
  p = first;
  for(t=0; t<20; ++t) *p++ = t;
}

void  incorrect_assumptions_about_the_placement_of_variables_in_memory(/* arguments */) {
  /* code */
  char s[80], y[80];
  char *p1, *p2;
  p1 = s;
  p2 = y;
  if(p1 < p2) //generally an invalid concept
}
void uninitialized_pointer(/* arguments */) {
  int x, *p;
  x = 10;
  *p = x;
  //Since the pointer p has never been given a value, it contains an
  //unknown value when the assignment *p = x takes place
}
void simple_misunderstanding_of_how_to_use_a_pointer(/* arguments */) {
  int x, *p;
  x = 10;
  p = x;// That statement assigns the value 10 to the pointer p. However, p is supposed
        //to contain an address, not a value p = &x;
  printf("%d", *p);
}

int main(int argc, char const *argv[]) {
  return 0;
}
