#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three variables: ";
    cin >> a >> b >> c;
    cout << "Before Swapping:\na = " << a << "\nb = " << b << "\nc = " << c;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    b = b ^ c;
    c = b ^ c;
    b = b ^ c;
    cout << "After Swapping:\na = " << a << "\nb = " << b << "\nc = " << c;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cout << "Before Swapping:\na = " << a << "\nb = " << b << "\nc = " << c;
    a = a + b + c;
    b = a - b - c;
    c = a - b - c;
    a = a - b - c;
    cout << "After Swapping:\na = " << a << "\nb = " << b << "\nc = " << c;
    return 0;
}