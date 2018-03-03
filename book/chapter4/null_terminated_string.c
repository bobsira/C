#define SIZE 256
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {


  // char name[30];
  // printf("Enter name: ");
  // gets(name);     //Function to read string from user.
  // printf("Name: ");
  // puts(name);    //Function to display string.

  char s1[80], s2[80];
  //fgets(s1,sizeof(s1),stdin);
  //fgets(s2,sizeof(s2),stdin);
  printf("Enter first string: ");
  scanf("%s", s1);

  printf("Enter second string: ");
  scanf("%s", s2);

  printf("lengths: %d %d\n",(int)strlen(s1) , (int)strlen(s2));

  if(!strcmp(s1,s2)) printf("The strings are equal\n");

  //concatenates str1 and str2 and resultant string is stored in str1.
  strcat(s1,s2);
  printf("%s\n", s1);

  strcpy(s1,"This is a test.\n");
  printf("%s", s1);

  if(strchr("hello",'e')) printf("e is in hello\n");
  if(strstr("hi there","hi ")) printf("found hi\n");

  //puts(str1);
  //puts(str2);
  return 0;
}
