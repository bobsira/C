#include <stdio.h>
int main(int argc, char const *argv[]) {

  //variables s
  int total = 0;
  int marks;
  float average = 0.0;
  int number_of_students;

  printf("Enter the total number_of_students: ");
  scanf("%d",&number_of_students );


  for (int i = 0; i < number_of_students; i++) {
    printf("Enter marks ");
    printf("%d: ",i+1);
    scanf("%d", &marks);
    total += marks; // add up to the total
  }

  printf("The total is %d\n",total);
  average = total / number_of_students;
  printf("Your average is %f\n",average);
  return 0;
}
