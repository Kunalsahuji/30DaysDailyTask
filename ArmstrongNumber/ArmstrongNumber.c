//  Armstrong Number: A number is said to be an Armstrong number if the sum of its digits each to the power total digit in the number is equal to the number itself.
//  Ex. 1,2,3,4.....,9, 153, 1634,

#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, sum = 0, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        n = n / 10;
        count += 1;
    }
    n = temp;
    while (n > 0)
    {
        int rem = n % 10;
        sum += pow(rem, count);
        n /= 10;
    }
    if (temp == sum)
    {
        printf("%d is an Armstrong Number.", temp);
    }
    else
    {
        printf("%d is not an Armstrong Number.", temp);
    }
    return 0;
}