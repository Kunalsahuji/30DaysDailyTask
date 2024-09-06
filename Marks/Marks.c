// Check Grade Accourding to your marks:
#include <stdio.h>

int main()
{
    int num;
    printf("Enter marks to check: ");

    if (scanf("%d", &num) == 1)
    {

        if (num >= 91 && num <= 100)
        {
            printf("num = %d. You got A+ Grade 🤩✌️\n", num);
        }
        else if (num >= 81 && num <= 90)
        {
            printf("num = %d. You got A Grade 🤗🎉\n", num);
        }
        else if (num >= 71 && num <= 80)
        {
            printf("num = %d. You got B+ Grade 😍👌\n", num);
        }
        else if (num >= 61 && num <= 70)
        {
            printf("num = %d. You got B Grade ☺👋\n", num);
        }
        else if (num >= 33 && num <= 60)
        {
            printf("num = %d. You got C Grade 🙂🙆\n", num);
        }
        else if (num < 33 && num >= 0)
        {
            printf("num = %d. You Failed! 😞\n", num);
        }
        else
        {
            printf("num = %d Invalid marks. Please enter marks between 0 and 100.😞\n", num);
        }
    }
    else
    {
        printf("You entered wrong input. Please enter a valid number 😵😕\n");
    }

    return 0;
}
