/* This program has a bug. */
#include <string.h>
#include <stdio.h>
int main(void)
{
  char *p1;
  char s[80];
  p1 = s; //In general, you should remember to reinitialize a pointer if it is to be reused.
  do {
    gets(s); /* read a string */
    /* print the decimal equivalent of each
    character */
    while(*p1) printf(" %d", *p1++);
  } while(strcmp(s, "done"));
  return 0;
}
