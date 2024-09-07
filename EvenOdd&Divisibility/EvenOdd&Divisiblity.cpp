// Check Number is Even or Odd
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Number: ";
    if (cin >> num)
    {
        if (num % 2 == 0)
        {
            cout << "num = " << num << " is a Even Number.";
        }
        else
        {
            cout << "num = " << num << " is a Odd Number.";
        }
    }
    else
    {
        cout << "You entered Wrong Input! Please enter correct number."
    }
}