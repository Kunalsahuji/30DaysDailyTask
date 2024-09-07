// Check number is even or odd:
#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    if (scanf("%d", &num))
    {
        if (num % 2 == 0)
        {
            printf("num = %d is a Even Number.", num);
        }
        else
        {
            printf("num = %d is a Odd Number.", num);
        }
    }
    else
    {
        printf("You entered wrong input! Please enter correct number.");
    }
    return 0;
}

// Check given number is divisible or not by another number.
#include<stdio.h>
int main()
{
	int divident, divisor;
	printf("Enter divident: ");
	scanf("%d", &divident);
	printf("Enter divisor: ");
	scanf("%d", &divisor);

	if(divident % divisor == 0)
	{
		printf("%d is divisible by %d.",divident, divisor );
	}
	else
	{
		printf("%d is not divisible by %d.",divident, divisor );
		
	}
	return 0;
}