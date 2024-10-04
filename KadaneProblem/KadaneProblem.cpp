// Maximum subarray sum (Kadane's Problem):

#include <iostream>
#include <climits>
using namespace std;

int MaxSubArraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
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
    cout << "Enter number: ";
    cin >> n;

    int arr[n];
    cout << "Enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxSum = MaxSubArraySum(arr, n);
    cout << maxSum << endl;
    return 0;
}
