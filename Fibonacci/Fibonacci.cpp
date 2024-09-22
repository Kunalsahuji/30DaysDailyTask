// Fibonacci Number:

#include <iostream>
using namespace std;
int main()
{
    int n, n1 = 0, n2 = 1, n3;
    cout << "Enter number: ";
    cin >> n;
    if (n == 0)
    {
        cout << n << "th fibonacci number is : 0";
    }
    else if (n == 1)
    {
        cout << n << "th fibonacci number is : 0, 1";
    }
    else
    {
        cout << n << "th fibonacci number series is : 0, 1 ";
        n -= 2;
        while (n != 0)
        {
            n3 = n1 + n2;
            cout << " " << n3;
            n1 = n2;
            n2 = n3;
            n -= 1;
        }
        cout << " ";
    }
    return 0;
}