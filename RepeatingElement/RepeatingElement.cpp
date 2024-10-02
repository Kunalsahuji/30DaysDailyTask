#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter values: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    unordered_map<int, int> dict;

    for (int num : arr)
    {
        dict[num]++;
    }

    cout << "Repeating elements are: ";
    for (auto &item : dict)
    {
        if (item.second > 1)
        {
            cout << item.first << " ";
        }
    }

    return 0;
}
