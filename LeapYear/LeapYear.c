//  WAP to check whether the given year is a Leap Year or not

#include <stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    if (scanf("%d", &year))
    {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            printf("%d is a Leap Year.", year);
        }
        else
        {
            printf("%d is not a Leap Year.", year);
        }
    }
    else
    {
        printf("You entered a wrong input. Please enter correct number.");
    }
    return 0;
}