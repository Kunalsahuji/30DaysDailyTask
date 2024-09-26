//  ReverseArray:
#include <iostream>
using namespace std;

void ReverseArray(int n, int arr[])
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
    printf("Reverse Array: ");
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n, i;
    cout << "Enter number: ";
    cin >> n;
    int arr[n];
    cout << "Enter values: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Arrar: ";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    ReverseArray(n, arr);
    cout << endl;
    return 0;
}
