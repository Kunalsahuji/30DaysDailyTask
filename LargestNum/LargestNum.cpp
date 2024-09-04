// Find out Largest number amoung 3 numbers.

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b, c;

//     cout << "Enter three numbers: ";
//     cin >> a >> b >> c;

//     if (a >= b && a >= c) {
//         cout << "The largest number is: " << a << endl;
//     } else if (b >= a && b >= c) {
//         cout << "The largest number is: " << b << endl;
//     } else {
//         cout << "The largest number is: " << c << endl;
//     }

//     return 0;
// }

// --------------------------------------------

// Find out Largest number amoung 3 numbers.

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;
    if (a == b && b == c)
    {
        cout << "All numbers are equal: a= " << a << ", b = " << b << ", c = " << c << endl;
    }
    else if (a == b && a > c)
    {
        cout << "Both numbers are equal and largest: a = " << a << ", b = " << b << endl;
    }
    else if (a == c && a > b)
    {
        cout << "Both numbers are equal and largest: a = " << a << ", c = " << c << endl;
    }
    else if (b == c && b > a)
    {
        cout << "Both numbers are equal and largest: b = " << b << ", c = " << c << endl;
    }
    else if (a > b && a > c)
    {
        cout << "The largest number is: a = " << a << endl;
    }
    else if (b > a && b > c)
    {
        cout << "The largest number is: b = " << b << endl;
    }
    else
    {
        cout << "The largest number is: c = " << c << endl;
    }
    return 0;
}