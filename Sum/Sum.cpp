// Sum of n numbers:

#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The Sum of " << n << " numbers is " << sum;
    return 0;
}