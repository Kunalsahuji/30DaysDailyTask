// Sum of n numbers:

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i, sum = 0;
//     cout << "Enter number: ";
//     cin >> n;
//     for (i = 1; i <= n; i++)
//     {
//         sum += i;
//     }
//     cout << "The Sum of " << n << " numbers is " << sum;
//     return 0;
// }

// Sum of squares:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i, sum = 0;
//     cout << "Enter number: ";
//     cin >> n;

//     for (i = 0; i <= n; i++)
//     {
//         sum += i * i;
//         cout << "\nsquare of " << i << " = " << i * i << "and sum = " << sum;
//     }
//     cout << "\nsum of square of " << n << " numbers square =" << sum;
//     return 0;
// }

//--------------------------------------------
// Sum of cubes:
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0;
    cout << "Enter number: ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        sum += i * i * i;
        cout << "\ncube of " << i << " = " << i * i * i << " and sum = " << sum;
    }
    cout << "\nsum of cube of " << n << " numbers cube =" << sum;
    return 0;
}