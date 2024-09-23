//  LCM :

#include <stdio.h>
int main()
{
    int a, b, i, maxNum;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    maxNum = a > b ? a : b;
    while (1)
    {
        if (maxNum % a == 0 && maxNum % b == 0)
        {
            printf("LCM of %d and %d =  %d", a, b, maxNum);
            break;
        }
        maxNum++;
    }
    return 0;
}