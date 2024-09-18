// Write a program to input a number and find whether the number is a Disarium number or not:
//  A number is said to be Disarium if sum of its digits powered with their respective positions is equal to the number itself.
//  Sample Input: 135 Sample Output: 135 ⇒ 1 1 + 3 2 + 5 3 = 135 So, 135 is a Disarium number.

#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, rem, sum = 0, count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;

    while (n > 0)
    {
        n /= 10;
        count += 1;
    }
    n = temp;
    while (n > 0)
    {
        rem = n % 10;
        sum += pow(rem, count);
        count -= 1;
        n /= 10;
    }
    if (temp == sum)
    {
        printf("%d is a Disarium Number", temp);
    }
    else
    {
        printf("%d is not a Disarium Number", temp);
    }
    return 0;
}