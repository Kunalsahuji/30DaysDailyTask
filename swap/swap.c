#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Before swapping:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    // Swap  
    // a and b
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // Swap b and c
    b = b ^ c;
    c = b ^ c;
    b = b ^ c;

    printf("After swapping:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}

// swap three variable without any extra variable:

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
    printf("before swapping:\na = %d,\nb = %d,\nc = %d\n", a, b, c);
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;
    printf("after swapping:\na = %d,\nb = %d,\nc = %d", a, b, c);
    return 0;
}