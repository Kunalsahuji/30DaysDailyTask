// Maximum subarray sum (Kadane's Problem):

#include <stdio.h>
#include <limits.h>

int MaxSubArraySum(int arr[], int n)
{
    int maxSum = INT_MIN; // Use INT_MIN for minimum integer value
    int sums = 0;

    for (int i = 0; i < n; i++)
    {
        sums += arr[i];
        if (sums > maxSum)
        {
            maxSum = sums;
        }
        if (sums < 0)
        {
            sums = 0;
        }
    }
    return maxSum;
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

    int maxSum = MaxSubArraySum(arr, n);
    printf("%d\n", maxSum);
    return 0;
}
