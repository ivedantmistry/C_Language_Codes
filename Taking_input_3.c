//Program to print a Word taken as input from user.
#include <stdio.h>
int main()
{
    char Word[100];
    printf("Enter any Word\n");
    scanf("%s", &Word);

    printf("The Word you entered is %s\n", Word);
    return 0;
}