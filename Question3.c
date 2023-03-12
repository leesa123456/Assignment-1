#include <stdio.h>
void main()
{
    int a = 0;
    printf("Enter a number :");
    scanf("%d,&a");

    int sum = 0;
    int r = 0;
    do
    {
        r = a % 10;
        sum = sum + r;
        a = a / 10;
    } while (a > 0);
    printf("sum of digit of the number is %d", sum);
}