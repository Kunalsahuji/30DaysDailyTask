// WAP to check given number is Perfect or not

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("%d is a Perfect Number", n);
    }
    else
    {
        printf("%d is not a Perfect Number", n);
    }
    return 0;
}