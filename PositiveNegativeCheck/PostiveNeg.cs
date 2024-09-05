//  Check number is Positive or Negative:
using System;
class Program 
{
    static void Main()
    {
        Console.Write("Enter number to check: ");
        string input = Console.ReadLine();
        if(int.TryParse(input, out int num))
        {
            if (num > 0)
            {
                Console.WriteLine($"num = {num} is a Positive Number");
            }
            else if (num < 0)
            {
                Console.WriteLine($"num = {num} is a Negative Number");
            }
            else
            {
               Console.WriteLine($"num = {num} is a Zero");
            }
        }
        else
        {
            Console.WriteLine("Wrong input. Please try enter a valid number");
        }

    }
}