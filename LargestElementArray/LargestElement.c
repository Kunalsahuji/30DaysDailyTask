// Largest Element in the Array:
#include <stdio.h>
void LargestElement(int n, int arr[])
{
    int maximum = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    printf("\nLargest Element in the Array is : %d", maximum);
}
int main()
{
    int i, n;
    printf("Enter number: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    LargestElement(n, arr);

    return 0;
}