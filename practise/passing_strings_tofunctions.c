#include <stdio.h>
void displayString(char str[]);
int main(int argc, char const *argv[]) {
  char str[50];
  printf("Enter string: ");
  scanf ("%[^\n]%*c", str); // passing string to function
  displayString(str);
  return 0;
}
void displayString(char str[]) {
  printf("String output: ");
  puts(str);
}
