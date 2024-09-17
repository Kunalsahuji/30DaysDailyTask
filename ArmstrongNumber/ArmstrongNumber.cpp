//  Armstrong Number: A number is said to be an Armstrong number if the sum of its digits each to the power total digit in the number is equal to the number itself.
//  Ex. 1,2,3,4.....,9, 153, 1634,

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, temp, sum = 0, count = 0, rem;
    cout << "Enter number: ";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        n /= 10;
        count += 1;
    }
    n = temp;
    while (n > 0)
    {
        rem = n % 10;
        sum += pow(rem, count);
        n /= 10;
    }
    if (temp == sum)
    {
        cout << "" << temp << " is an Armstrong Number";
    }
    else
    {
        cout << "" << temp << " is not an Armstrong Number";
    }
    return 0;
}