// Sum of n numbers:

// #include <stdio.h>
// int main()
// {
//     int n, i, sum = 0;
//     printf("Enter number: ");
//     scanf("%d", &n);
//     for (i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     printf("Sum of %d numbers is %d", n, sum);
//     return 0;
// }

// --------------------------------------------------

// sum of square of n numbers:

// #include <stdio.h>
// int main()
// {
//     int n, i, sum = 0;
//     printf("Enter number: ");
//     scanf("%d", &n);

//     for (i = 0; i <= n; i++)
//     {
//         sum += i * i;
//         printf("\nsquare of %d = %d and sum = %d", i, i * i, sum);
//     }
//     printf("\nsum of square of first %d square number's = %d", n, sum);
//     return 0;

// }

// ---------------------------------------

// sum of cube of n numbers:

#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        sum += i * i * i;
        printf("\ncube of %d = %d and sum = %d", i, i * i * i, sum);
    }
    printf("\nsum of cube of first %d cube number's = %d", n, sum);
    return 0;
}