// Factorial Number:

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, temp, fact = 1;
//     cout << "Enter number: ";
//     cin >> n;
//     temp = n;
//     while (n > 0)
//     {
//         fact *= n;
//         n -= 1;
//     }
//     cout << "Factorial of " << temp << " = " << fact;
//     return 0;
// }

// Recursive Function:

#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}
int main()
{
    int n, temp;
    cout << "Enter number: ";
    cin >> n;
    temp = n;
    cout << "Factorial of " << temp << " = " << factorial(n);
    return 0;
}
