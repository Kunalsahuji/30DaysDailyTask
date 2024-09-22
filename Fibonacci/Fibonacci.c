// Fibonacci Number:

#include <stdio.h>
int main()
{
    int n, n1 = 0, n2 = 1, n3;
    printf("Enter number: ");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%dth Fibonacci number is : 0", n);
    }
    else if (n == 1)
    {
        printf("%dth Fibonacci number is : 0 1 ", n);
    }
    else
    {
        printf("%dth Fibonacci number is : 0 1 ", n);
        n -= 2;
        while (n != 0)
        {
            n3 = n1 + n2;
            printf("%d ", n3);
            n1 = n2;
            n2 = n3;
            n -= 1;
        }
        printf("");
    }
    return 0;
}