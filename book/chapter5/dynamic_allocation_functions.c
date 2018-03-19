#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char *p;
p = malloc(1000); /* get 1000 bytes */
//p = (char *) malloc(1000); c++

int *p;
p = (int *) malloc(50*sizeof(int)); /* allocates space for 50 integers */

//The proper way to allocate memory and test for a valid pointer
//is illustrated in this code fragment
void allocate_validpointer() {
  p = (int *) malloc(100);
  if(!p) {
    printf("Out of memory.\n");
  exit(1);
  }

}
