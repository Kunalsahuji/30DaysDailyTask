//  strong number: A number is said to be a strong number if the sum of the factorial of the digit is equal to the number itself. Ex. 1, 2, 145

#include <iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n -= 1;
    }
    return fact;
}
int main()
{
    int n, sum = 0, temp;
    cout << "Enter number: ";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        sum += factorial(n % 10);
        n /= 10;
    }
    if (temp == sum)
    {
        cout << "" << temp << " is a strong number";
    }
    else
    {
        cout << "" << temp << " is not a strong number";
    }
    return 0;
}