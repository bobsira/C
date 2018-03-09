#include <stdio.h>
int main(int argc, char const *argv[]) {

  int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  char str[11] = "I like C++";

  /* same as above */
  char str[11] = {'I', ' ', 'l', 'i', 'k', 'e',' ', 'C', '+', '+', '\0'};

  int sqrs[10][2] = {
    1, 1,
    2, 4,
    3, 9,
    4, 16,
    5, 25,
    6, 36,
    7, 49,
    8, 64,
    9, 81,
    10, 100
  };

  /* same as above - subaggregate grouping */
  int sqrs[10][2] = {
    {1, 1},
    {2, 4},
    {3, 9},
    {4, 16},
    {5, 25},
    {6, 36},
    {7, 49},
    {8, 64},
    {9, 81},
    {10, 100}
  };

  char e1[12] = "Read error\n";
  char e2[13] = "Write error\n";
  char e3[18] = "Cannot open file\n";

  /* same as above - unsized array */
  char e1[] = "Read error\n";
  char e2[] = "Write error\n";
  char e3[] = "Cannot open file\n";
  printf("%s has length %d\n", e2, (int)sizeof e2);

  /* unsized two dimension array */
  int sqrs[][2] = {
    {1, 1},
    {2, 4},
    {3, 9},
    {4, 16},
    {5, 25},
    {6, 36},
    {7, 49},
    {8, 64},
    {9, 81},
    {10, 100}
  };
  return 0;
}
