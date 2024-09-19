// Find factorial number and factors and sum of factor

#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0, fact = 1;
    cout << "Enter number: ";
    cin >> n;
    cout << "factor of " << n << " = ";
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << "  ";
            sum += i;
        }
        fact *= i;
    }
    cout << "Factorial of " << n << " = " << fact << "\n and Sum = " << sum;
}