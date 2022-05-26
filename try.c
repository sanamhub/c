#include <stdio.h>
#include <math.h>

// user defined function
double find_square_root(double n)
{
    return sqrt(n);
}

// main function
int main()
{
    double number, sqrt;
    printf("Enter a number\n");
    scanf("%lf", &number);

    sqrt = find_square_root(number);
    printf("The square root is %lf", sqrt);
    return 0;
}
