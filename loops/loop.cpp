// print a table of n number:
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n, i;
//     cout << "Enter number: ";
//     cin >> n;
//     for (i = 1; i <= 10; i++)
//     {
//         cout << "\n" << n << " * " << i <<" = "<< n * i;
//     }
//     return 0;
// }

// write even odd number from 0 to n number:

#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter number: ";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "\n"
                 << i << " is even.";
        }
        else
        {
            cout << "\n"
                 << i << " is odd.";
        }
    }
}