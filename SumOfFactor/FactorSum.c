// // Find factorial number and factors and sum of factor

#include <stdio.h>

int main()
{
    int i, n, sum = 0, fact = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
            printf("%d ", i);
        }
        fact *= i;
    }
    printf("\nFactorial of %d = %d\nSum of factors = %d", n, fact, sum);
    return 0;
}