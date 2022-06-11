// Program to find radius of circle and Volume of cylinder.
#include <stdio.h>
int main()
{
    int radius, height;
    float pi = 3.14;
    printf("Enter the Radius of Circle\n");
    scanf("%d", &radius);

    // We will consider Radius of circle as same of Cylinder
    printf("Enter the Height of Cylinder\n");
    scanf("%d", &height);

    printf("Area of the Circle is %f\n", pi * radius * radius);
    printf("And\n");
    printf("Volume of the Cylinder is %f\n", pi * radius * radius * height);

    return 0;
}