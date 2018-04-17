#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  /* code */
  int n;
  long x = 0;
  char str[3];
  long y;
  scanf("%d\n",&n);
  for (size_t i = 0; i < n; i++) {
    /* code */
    scanf("%s", str);
    scanf("%ld", &y);
    if (strcmp(str, "add")==0) {
      /* code */
      if (y>=0) {
        x= x+y;
      }
    }
    if (strcmp(str, "set")==0) {
      /* code */
      if (y>0 && y>x) {
        x = y;
      }
    }
  }

  printf("%ld\n", x);
  //printf("%s\n", str);
  //printf("%d\n", y);
  return 0;
}
