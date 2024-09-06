// Check Grade Accourding to your marks:

using System;

class Program
{
    static void Main()
    {
        Console.Write("Enter marks to check: ");
        string input = Console.ReadLine();

        if (int.TryParse(input, out int num))
        {
            if (num < 0 || num > 100)
            {
                Console.WriteLine("Invalid marks. Please enter marks between 0 and 100.");
            }
            else if (num >= 91)
            {
                Console.WriteLine($"num = {num}. You got A+ Grade 🤩✌️");
            }
            else if (num >= 81)
            {
                Console.WriteLine($"num = {num}. You got A Grade 🤗🎉");
            }
            else if (num >= 71)
            {
                Console.WriteLine($"num = {num}. You got B+ Grade 😍👌");
            }
            else if (num >= 61)
            {
                Console.WriteLine($"num = {num}. You got B Grade ☺👋");
            }
            else if (num >= 33)
            {
                Console.WriteLine($"num = {num}. You got C Grade 🙂🙆");
            }
            else
            {
                Console.WriteLine($"num = {num}. You Failed! 😞");
            }
        }
        else
        {
            Console.WriteLine("You entered wrong input. Please enter a valid number 😵😕");
        }
    }
}
