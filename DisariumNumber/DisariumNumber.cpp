// Write a program to input a number and find whether the number is a Disarium number or not:
//  A number is said to be Disarium if sum of its digits powered with their respective positions is equal to the number itself.
//  Sample Input: 135 Sample Output: 135 ⇒ 1 1 + 3 2 + 5 3 = 135 So, 135 is a Disarium number.

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, temp, rem, sum = 0, count = 0;
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
        count -= 1;
        n /= 10;
    }
    if (temp == sum)
    {
        cout << "" << temp << " is a Disarium Number";
    }
    else
    {
        cout << "" << temp << " is not a Disarium Number";
    }
    return 0;
}