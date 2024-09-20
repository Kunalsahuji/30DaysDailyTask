// WAP to check given number is perfect or not

#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter number: ";
    cin >> n;

    for (i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        cout << n << " is a Perfect Number";
    }
    else
    {
        cout << n << " is not a Perfect Number";
    }
    return 0;
}