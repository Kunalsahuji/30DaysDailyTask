// Find out Largest number amoung 3 numbers.

// #include <stdio.h>

// int main() {
//     int a, b, c;

//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     if (a >= b && a >= c) {
//         printf("The largest number is: %d\n", a);
//     } else if (b >= a && b >= c) {
//         printf("The largest number is: %d\n", b);
//     } else {
//         printf("The largest number is: %d\n", c);
//     }

//     return 0;
// }

// -----------------------------------------------------------

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);

    if (a == b && a == c)
    {
        printf("All numbers are equal. a = %d, b = %d, c = %d", a, b, c);
    }
    else if (a == b && a > c)
    {
        printf("Both numbers are equal and Largest a = %d, b = %d", a, b);
    }
    else if (a == c && a > b)
    {
        printf("Both numbers are equal and Largest. a = %d, c = %d", a, c);
    }
    else if (b == c && b > a)
    {
        printf("Both numbers are equal and Largest. b = %d, c = %d", b, c);
    }
    else if (a > b && a > c)
    {
        printf("a = %d is greater number", a);
    }
    else if (b > a && b > c)
    {
        printf("b = %d is greater number", b);
    }
    else
    {
        printf("c = %d is greater number", c);
    }
    return 0;
}
