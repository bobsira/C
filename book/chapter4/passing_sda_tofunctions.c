#include <stdio.h>

void func1(int *x) {
  /* pointer as parameter */
}

void func1(int x[10]) {
  /* sized array as parameter */
}

void func1(int x[]) {
  /* unsized array as parameter */
}

//the length of the array doesn't matter as
//far as the function is concerned because C/C++ performs no bounds checking.
// the compiler generates code that instructs func1( ) to receive a pointer

int main(int argc, char const *argv[]) {
  /* code */
  int i[10];
  func1(i);
  return 0;
}
