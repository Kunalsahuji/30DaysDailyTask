// Check Grade Accourding to your marks:

#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter number to check: ";
    if (cin >> num)
    {
        if (num >= 91 && num <= 100)
        {
            cout << "num = " << num << ". You got A+ Grade 🤩✌️" << endl;
        }
        else if (num >= 81 && num <= 90)
        {
            cout << "num = " << num << ". You got A Grade 🤗🎉" << endl;
        }
        else if (num >= 71 && num <= 80)
        {
            cout << "num = " << num << ". You got B+ Grade 😍👌" << endl;
        }
        else if (num >= 61 && num <= 70)
        {
            cout << "num = " << num << ". You got B Grade ☺👋" << endl;
        }
        else if (num >= 33 && num <= 60)
        {
            cout << "num = " << num << ". You got C Grade 🙂🙆" << endl;
        }
        else if (num >= 0 && num <= 32)
        {
            cout << "num = " << num << ". You Failed! 😞" << endl;
        }
        else
        {
            cout << "Invalid marks. Please enter marks between 0 and 100." << endl;
        }
    }
    else
    {
        cout << "You entered wrong input. Please enter a valid number 😵😕" << endl;
    }
}