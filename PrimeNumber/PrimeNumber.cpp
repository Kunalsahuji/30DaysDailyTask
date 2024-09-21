// Prime Number: A number is said to be a Prime number if it is only divisible by 1 and itself.
// 1 is not a Prime Number
// Negative numbers are not the prime numbers.
// Prime Numbers series goes like: 2, 3, 5, 7, 9, 11, 13, 17, 19, 23........

#include <iostream>
using namespace std;
int main()
{
    int n, i, flag = 0;
    cout << "Enter number: ";
    cin >> n;
    if (n <= 1)
    {
        cout << n << " is not a Prime Number.";
    }
    else
    {
        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag)
        {
            cout << n << " is not a Prime Number.";
        }
        else
        {
            cout << n << " is a Prime Number.";
        }
    }
    return 0;
}