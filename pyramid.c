#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i,j;
  for (i = 0; i < 6; i++) {
    //these are the rows

    for (j = 0; j < (i*2)+2; j++) {
      //these are the columns or stars
      printf("* ");
    }


    printf("\n"); // move to the next row
  }
  return 0;
}
