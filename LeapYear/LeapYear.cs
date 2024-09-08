//  WAP to check whether the given year is a Leap Year or not

using System;
class Program
{
	static void Main()
	{
		Console.Write("Enter year: ");
		string input = Console.ReadLine();

		if (int.TryParse(input, out int year))
		{
			if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
			{
				Console.WriteLine($"{year} is a Leap Year.");
			}
			else
			{
				Console.WriteLine($"{year} is not a Leap Year.");
			}
		}
		else
		{
			Console.WriteLine("You entered wrong input! Please enter correct number.");
		}
	}
}