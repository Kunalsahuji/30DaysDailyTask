// Reverse Array:
#include <stdio.h>
void reverseArray(int n, int arr[])
{
    int start = 0, end = n - 1;
    while (start < end)
    {
        arr[start] ^= arr[end];
        arr[end] ^= arr[start];
        arr[start] ^= arr[end];
        start++;
        end--;
    }
    printf("Reverse Array : ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf(" ");
    reverseArray(n, arr);

    return 0;
}