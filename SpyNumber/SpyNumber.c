// SPY Number : A number is said to be a SPY Number if the sum of its digits is exactly equal to the product of its digits.

#include <stdio.h>
int main()
{
    int n, sum = 0, product = 1, temp, rem;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        product *= rem;
        n /= 10;
    }
    if (sum == product)
    {
        printf("%d is a Spy Number", temp);
    }
    else
    {
        printf("%d is not a Spy Number", temp);
    }
    return 0;
}
