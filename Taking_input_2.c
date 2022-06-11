//Program to print a Letter taken as input from user.
#include <stdio.h>
int main()
{
    char Letter;
    printf("Enter any Letter\n");
    scanf("%c", &Letter);

    printf("The Letter you entered is %c\n", Letter);
    return 0;
}