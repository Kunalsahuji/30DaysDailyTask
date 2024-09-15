// Factorial Number:

// #include <stdio.h>
// int main()
// {
//     int n, temp, fact = 1;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     temp = n;
//     while (n > 0)
//     {
//         fact *= n;
//         n -= 1;
//     }
//     printf("Factorial of %d = %d", temp, fact);
// }

// by recursion:
#include <stdio.h>
int factorial(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Factorial of %d = %d", n, factorial(n));
    return 0;
}