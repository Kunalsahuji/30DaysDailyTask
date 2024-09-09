#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num_sqrt, num_cbrt, base, exponent;
    cout << "Enter number for square root: ";
    cin >> num_sqrt;
    cout << "The Square Root of " << num_sqrt << " = " << sqrt(num_sqrt);
    cout << "\nEnter number for cube root: ";
    cin >> num_cbrt;
    cout << "The Square Root of " << num_cbrt << " = " << cbrt(num_cbrt);
    cout << "\nEnter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    cout << "The power of " << base << " of " << exponent << " = " << pow(base, exponent);
    return 0;
}