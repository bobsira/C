#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  printf("sirasira\n");
  int students,total = 0;
  cout << "Enter the number of students in the class" << '\n';
  cin >> students;
  int grades[students];
  double average;

  for (int i = 0; i < students; i++) {
    cout << "Enter marks for student " << i+1<<" ";
    cin >> grades[i];
  }
  cout << endl;
  // computing total
  for(int i =0;i<students;i++) total+=grades[i];
  cout << "the total mark is " << total << endl;
  cout << endl;
  // computing average
  average = (double)total/(double)students;
  cout << "the average is " << average << endl;
  cout << endl;


  //display elements
  for(int i =0;i<students;i++){
    cout << grades[i] << '\n';
  }

  cout << endl;
  // display elements using while loop
  int j = 0;
  while (j < students) {
    cout << grades[j] << '\n';
    j++;
  }



  return 0;
}
