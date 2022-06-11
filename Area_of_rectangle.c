// Program to find Area of Rectangle by taking input from User

#include <stdio.h>
int main()
{
    int Width, Length;
    

    printf("Enter the Width of Rectangle\n");
    scanf("%d", &Width);

    printf("Enter the Length of Rectangle\n");
    scanf("%d", &Length);

    printf("Area of the Rectangle is %d", Length * Width);

    return 0;
}