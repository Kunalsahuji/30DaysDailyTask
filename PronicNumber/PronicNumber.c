//  Pronic Number : It is also known as an Oblong number, is a type of natural number that is the product of two consecutive integers
// Mathematically, a pronic number can be represented as : n(n+1)  ==> 3(3+4) = 12

#include <stdio.h>
int main()
{
    int n, i, flag;
    flag = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i * (i + 1) == n)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("%d is a Pronic Number.", n);
    }
    else
    {
        printf("%d is not a Pronic Number.", n);
    }
    return 0;
}