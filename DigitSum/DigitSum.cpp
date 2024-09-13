//  Find Sum of Digit:

#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, i, sum, temp;
    cout << "Etner number: ";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum of " << temp << " is " << sum;
    return 0;
}