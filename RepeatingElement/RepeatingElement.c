#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter number: ");
    scanf("%d", &n);

    int arr[n];
    int count[1000] = {0}; // Assuming max value in array is within 1000

    printf("Enter values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        count[arr[i]]++;
    }

    printf("Repeating elements are: ");
    for (i = 0; i < 1000; i++)
    {
        if (count[i] > 1)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
