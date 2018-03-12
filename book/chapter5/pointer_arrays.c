#include <stdio.h>
#include <stdlib.h>
void putstr(char *s);
int main(int argc, char const *argv[]) {
  /* code */
  char name[11] = {'L','e','s','s','o','n','s','\n','\0'};     // valid initialization
  char *p = name;
  putstr(p);
  return 0;
}

/* Index s as an array. */
void putstr(char *s)
{
  register int t;
  for(t=0; s[t]; ++t) putchar(s[t]);
}

/* Access s as a pointer. */
void putstr(char *s)
{
  while(*s) putchar(*s++);
}
