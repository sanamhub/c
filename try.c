#include <stdio.h>

int main()
{
    int num1, num2;
    int *ptr1, *ptr2;
    int mul;

    printf("Please enter value for num1: ");
    scanf("%d", &num1);
    printf("Please enter value for num2: ");
    scanf("%d", &num2);

    ptr1 = &num1;
    ptr2 = &num2;
    mul = *ptr1 * *ptr2;

    printf("Product of the two numbers is: %d", mul);
    return 0;
}
