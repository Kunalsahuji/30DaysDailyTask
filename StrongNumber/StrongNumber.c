//  strong number: A number is said to be a strong number if the sum of the factorial of the digit is equal to the number itself. Ex. 1, 2, 145

#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n -= 1;
    }
    return fact;
}
int main()
{
    int n, sum = 0, temp;
    n = printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        sum += factorial(n % 10);
        n /= 10;
    }
    if (temp == sum)
    {
        printf("%d is a Strong Number.", temp);
    }
    else
    {
        printf("%d is not a Strong Number.", temp);
    }
    return 0;
}