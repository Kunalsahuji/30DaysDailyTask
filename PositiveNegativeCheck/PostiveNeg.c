//  Check number is Positive or Negative:

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number to check: ");

    if (scanf("%d", &num) == 1)
    {
        if (num > 0)
        {
            printf("num = %d is a Positive Number.\n", num);
        }
        else if (num < 0)
        {
            printf("num = %d is a Negative Number.\n", num);
        }
        else
        {
            printf("num = %d is Zero.\n", num);
        }
    }
    else
    {
        printf("Wrong Input. Please enter a valid number.\n");
    }

    return 0;
}
