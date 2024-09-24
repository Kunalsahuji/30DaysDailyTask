// SPY Number : A number is said to be a SPY Number if the sum of its digits is exactly equal to the product of its digits.

#include <iostream>
using namespace std;
int main()
{
    int n, rem, temp, sum = 0, product = 1;
    cout << "Enter number: ";
    cin >> n;
    temp = n;

    while (n > 0)
    {
        rem = n % 10;
        sum += rem;
        product *= rem;
        n /= 10;
    }
    if (sum == product)
    {
        cout << temp << " is a Spy Number";
    }
    else
    {
        cout << temp << " is not a Spy Number";
    }
    return 0;
}