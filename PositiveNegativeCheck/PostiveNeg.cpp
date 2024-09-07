//  Check number is Positive or Negative:
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter number to check: ";
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

// Check given number is divisible by another number or not

#include <iostream>
using namespace std;
int main()
{
	int divident, divisor;
	cout << "Enter divident: ";
	cin>>divident;
	cout<<"Enter divisor: ";
	cin>>divisor;


	if (divident % divisor == 0)
	{
		cout <<""<<divident<<" is divisible by "<<divisor;
	}
	else
	{
		cout <<""<<divident<<" is not divisible by "<<divisor;
	}

}