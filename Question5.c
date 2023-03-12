#include <stdio.h>
void main()
{
    clrscr();

    printf(" enter the value of radius a");
    float r;
    scanf("%f", &r);
    float area = 3.141 * r * r;
    float diameter = 2 * r;
    float circumference = 2 * 3.141 * r;
    printf(" area of the circle is : %f\n", area);
    printf("diameter of circle is :%f\n", diameter);
    printf("circumference of circle is: %f\n", circumference);
}