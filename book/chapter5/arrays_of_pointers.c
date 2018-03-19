#include <stdio.h>
#include <stdlib.h>

void display_array(int *q[]){
  int t;
  for(t=0; t<10; t++)
  printf("%d ", *q[t]);
}

void syntax_error(int num){
  static char *err[] = {
    "Cannot Open File\n",
    "Read Error\n",
    "Write Error\n",
    "Media Failure\n"
  };
  printf("%s", err[num]);
}

int main(int argc, char const *argv[]) {
  int *x[10];
  return 0;
}
