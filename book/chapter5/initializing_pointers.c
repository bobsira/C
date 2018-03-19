#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* look up a name */
int search(char *p[], char *name){
  register int t;
  for(t=0; p[t]; ++t)
  if(!strcmp(p[t], name)) return t;
  return -1; /* not found */
}

//char *p = "hello world";
const char *p = "hello world";

int main(int argc, char const *argv[]) {
  register int t;
  /* print the string forward and backwards */
  printf("%s\n", p);
  for(t=strlen(p)-1; t>-1; t--) printf("%c", p[t]);
  printf("\n");
  return 0;
}
