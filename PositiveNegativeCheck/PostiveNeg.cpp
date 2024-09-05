//  Check number is Positive or Negative:
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter number to check: ";
    cin >> num;

    if (cin >> num)
    {
        if (num > 0)
        {
            cout << "num = " << num << "is a Positive Number" << endl;
        }
        else if (num < 0)
        {
            cout << "num = " << num << "is a Negative Number" << endl;
        }
        else
        {
            cout << "num = " << num << "is a Zero" << endl;
        }
    }
    else
    {
        cout << "Wrong input. Please try enter a valid number" << endl;
    }
    return 0;
}