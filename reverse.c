#include <stdio.h>
int main(int argc, char const *argv[]) {
  /* code */
  int n, reversedNumber = 0 , remainder;

  printf("Enter an integer: ");
  scanf("%d", &n);

  while (n!= 0) {
    remainder = n%10;
    reversedNumber = reversedNumber*10 + remainder;
    n /= 10;
  }

  printf("Reversed Number = %d\n", reversedNumber);
  return 0;
}
