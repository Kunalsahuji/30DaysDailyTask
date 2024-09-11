// Sum of n numbers:

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of %d numbers is %d", n, sum);
    return 0;
}