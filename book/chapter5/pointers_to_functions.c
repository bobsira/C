#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void check(char *a, char *b, int (*cmp)(const char *, const char *));
int numcmp(const char *a, const char *b);

int main(int argc, char const *argv[]) {
  char s1[80], s2[80];
  int (*p)(const char *, const char *);
  p = strcmp;
  //gets(s1);
  scanf ("%[^\n]%*c", s1);
  //gets(s2);
  scanf ("%[^\n]%*c", s2);
  //check(s1, s2, p); //check(s1, s2, strcmp);
  if(isalpha(*s1))
    check(s1, s2, strcmp);
  else
    check(s1, s2, numcmp);
  return 0;
}

void check(char *a, char *b, int (*cmp)(const char *, const char *)){
  printf("Testing for equality.\n");
  if(!(*cmp)(a, b)) printf("Equal\n");  //cmp(a, b);
  else printf("Not Equal\n");
}

int numcmp(const char *a, const char *b){
  if(atoi(a)==atoi(b)) return 0;
  else return 1;
}
