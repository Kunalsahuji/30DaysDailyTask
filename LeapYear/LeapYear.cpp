//  WAP to check whether the given year is a Leap Year or not

#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter year: ";
	if(cin>>year)
	{
		if((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
		{
			cout<<""<<year<<"is a Leap Year.";
		}
		else
		{
			cout<<""<<year<<"is not a Leap Year.";
		}
	}
	else
	{
		cout<<"You entered wrong input! Please enter correct number.";
	}
	return 0;
}