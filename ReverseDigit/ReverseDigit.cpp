// Reverse a Number:

#include <iostream>
using namespace std;
int main()
{
    int n, temp, reverse = 0;
    cout << "Enter number: ";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    cout << "Number: " << temp << " Reversed Number: " << reverse;
}