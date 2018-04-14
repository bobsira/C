#include <string.h>
#include <stdio.h>
void pr_reverse(char *s);

int main(void){
  pr_reverse((char *)"I like C++");
  return 0;
}

void pr_reverse(char *s){
  register int t;
  for(t=strlen(s)-1; t>=0; t--) putchar(s[t]);
  printf("\n");
}
