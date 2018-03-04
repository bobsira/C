#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    //fgets(name,100,stdin);     //Function to read string from user.
    scanf ("%[^\n]%*c", name);
    printf("Name: ");
    puts(name);    //Function to display string.
    return 0;
}
