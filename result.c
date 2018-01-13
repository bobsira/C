#include <stdio.h>
int main(int argc, char const *argv[]) {

  int counterPass = 0;
  int counterFail=0;
  int result;

  for (int i = 0; i < 10; i++) {
    printf("Enter result\n");
    scanf("%d",&result);
    if (result==1) {
      counterPass++;
    }
    if (result==2) {
      counterFail++;
    }
  }

  printf("The number of students who passed the exam are %d\n",counterPass);
  printf("The number of students who failed the exam are %d\n",counterFail);

  if (counterPass>=8) {
    printf("Bonus to the instructor\n");
  }
  
  return 0;
}
