// // print the table of n number:
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("\n%d * %d = %d", n, i, n * i);
//     }
//     return 0;
// }

// print all the even and odd numbers from 0 to n numbers:
#include <stdio.h>
int main()
{
    int n, i;
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("\n%d is even", i);
        }
        else
        {
            printf("\n%d is odd", i);
        }
    }
}