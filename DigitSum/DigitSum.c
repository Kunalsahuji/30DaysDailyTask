//  Find Sum of Digit:

#include <stdio.h>
int main()
{
    int n, i, temp, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;

    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    printf("Sum of %d is %d", temp, sum);
    return 0;
}