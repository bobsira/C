#include <stdio.h>
int main(int argc, char const *argv[]) {
  /* code */
  int marks;
  int marksTotal = 0;
  int numberOfStudentsEntered = 0;
  float average;
  printf("Enter first person's marks or -1 to quit\n");
  scanf("%d",&marks);
  while (marks!=-1) {
    marksTotal = marksTotal + marks;
    numberOfStudentsEntered++;
    printf("Enter first person's marks or -1 to quit\n");
    scanf("%d",&marks);
  }
  printf("The total is %d\n",marksTotal);
  average = marksTotal / numberOfStudentsEntered;
  printf("Your average is %f\n",average);
  return 0;
}
