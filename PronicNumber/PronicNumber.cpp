//  Pronic Number : It is also known as an Oblong number, is a type of natural number that is the product of two consecutive integers
// Mathematically, a pronic number can be represented as : n(n+1)  ==> 3(3+4) = 12

#include <iostream>
using namespace std;
int main()
{
    int n, i, flag;
    flag = false;
    cout << "Enter number: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (i * (i + 1) == n)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << n << " is a Pronic Number";
    }
    else
    {
        cout << n << " is not a Pronic Number";
    }
    return 0;
}