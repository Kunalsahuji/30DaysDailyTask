// Reverse the array by k rotation:

#include <stdio.h>
void ReverseArrayKrotation(int arr[], int start, int end)
{
    while (start < end)
    {
        arr[start] ^= arr[end];
        arr[end] ^= arr[start];
        arr[start] ^= arr[end];
        start++;
        end--;
    }
}
int main()
{
    int n, k, i;
    printf("Enter number: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter rotation: ");
    scanf("%d", &k);
    if (k > n)
    {
        k %= n;
    }
    ReverseArrayKrotation(arr, 0, n - 1);
    ReverseArrayKrotation(arr, 0, k - 1);
    ReverseArrayKrotation(arr, k, n - 1);
    for (i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }

    return 0;
}