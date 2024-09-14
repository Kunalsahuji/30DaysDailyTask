// Reverse a Number:

#include <stdio.h>
int main()
{
    int n, reverse = 0, temp;
    printf("Enter number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    printf("number: %d Reversed Number: %d", temp, reverse);
}