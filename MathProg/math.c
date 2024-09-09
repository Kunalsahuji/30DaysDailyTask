// find sqaure root, cube root and power for given number:

#include <stdio.h>
#include <math.h>

int main()
{
    int num_sqrt, num_cbrt, base, exponent;
    printf("Enter number for square root: ");
    scanf("%d", &num_sqrt);
    printf("square of %d = %.2f", num_sqrt, sqrt(num_sqrt));
    printf("\nEnter number for cube root: ");
    scanf("%d", &num_cbrt);
    printf("The Cube Root of %d = %.3f", num_cbrt, cbrt(num_cbrt));
    printf("\nEnter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    printf("The power %d of %d = %f", base, exponent, pow(base, exponent));
    return 0;
}
