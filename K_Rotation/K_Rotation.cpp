// Reverse the array by k rotation:

#include <iostream>
using namespace std;

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
    cout << "Enter number: ";
    cin >> n;
    int arr[n];
    cout << "Enter values: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter rotation: ";
    cin >> k;
    if (k > n)
    {
        k %= n;
    }
    ReverseArrayKrotation(arr, 0, n - 1);
    ReverseArrayKrotation(arr, 0, k - 1);
    ReverseArrayKrotation(arr, k, n - 1);
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}