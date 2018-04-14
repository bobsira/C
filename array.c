#include <stdio.h>
int main(int argc, char const *argv[]) {
  int marks[10];
  int sum = 0;
  int i;

  for (i = 0; i < 10; i++) {
    printf("Enter marks %d\n",(i+1));
    scanf("%d",&marks[i]);
    sum += marks[i];
  }

  printf("You entered the following marks: ");
  for (size_t i = 0; i < 10; i++) {
    printf("%d ",marks[i]);
  }

  double average =sum/10.0;
  printf("\nThe sum of all the marks is %d\n",sum);
  printf("The average of the marks is %f\n",average);
  return 0;
}
