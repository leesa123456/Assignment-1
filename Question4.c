#include <stdio.h>

int main()
{
    float num1, num2, resuylt;
    int choice;
    printf("enter first number");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("choose an operation:\n")
        printf("1. Addition\n");
    printf("2. subtraction\n");
    printf("3. multiplication");
    printf("4. division");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        result = num + num2;
        printf("The sum is %f\n", result);
        break;
    case 2:
        result = num1 - num2;
        printf(" the difference is %f", result);
        czse 3 : result = num1 * num2;
        printf(" the product is %f\n", result);
        break;
    case 4:
        result = num1 / num2;
        printf(" the quotient is %f\", result);
    }
    else
    {
        printf("Error: division by zero\n");
    }
    break;
default:
    printf(" Invalid choice\n");
}
}