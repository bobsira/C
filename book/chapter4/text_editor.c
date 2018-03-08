/* A very simple text editor*/
#include <stdio.h>

#define MAX 100
#define LEN 80

char text[MAX][LEN];

int main(int argc, char const *argv[]) {
  register int t, i, j;
  printf("Enter an empty line to quit\n");

  for(t=0;t<MAX;t++){
    printf("%d:", t);
    scanf("%[^\n]%*c",text[t]);
    if(!*text[t]) break; /* quit on a blank line */
  }

  for(i=0;i<t;i++){
    for(j=0;text[i][j];j++) putchar(text[i][j]);
    putchar('\n');
  }
  return 0;
}
