//  LCM :
#include <iostream>
using namespace std;
int main()
{
    int a, b, i, maxNum;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    maxNum = a > b ? a : b;
    while (true)
    {
        if (maxNum % a == 0 && maxNum % b == 0)
        {
            cout << "LCM of " << a << " and " << b << " = " << maxNum;
            break;
        }
        maxNum++;
    }
    return 0;
}
