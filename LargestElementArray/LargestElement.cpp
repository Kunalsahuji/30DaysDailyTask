// Largest Element in the Array:

#include <iostream>
using namespace std;
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
    cout << "Largest Element in the Array is: " << maximum;
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
    LargestElement(n, arr);
    return 0;
}