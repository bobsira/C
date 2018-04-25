#include <stdio.h>

/* non-recursive */
int fact(int n) {
  int t, answer;
  answer = 1;
  for(t=1; t<=n; t++)
  answer=answer*(t);
  return(answer);
}

/* recursive */
int factr(int n) {
  int answer;
  if(n==1) return(1);
  answer = factr(n-1)*n; /* recursive call */
  return(answer);
}

int main(int argc, char const *argv[]) {
  /* code */
  return 0;
}
