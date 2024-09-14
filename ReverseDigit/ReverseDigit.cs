// Reverse a Number:

using System;
class Program
{
    static void Main()
    {
        int n, temp, reverse = 0;
        Console.Write("Enter number: ");
        n = int.Parse(Console.ReadLine());
        temp = n;
        while (n > 0)
        {
            reverse = reverse * 10 + n % 10;
            n /= 10;
        }
        Console.WriteLine($"Number: {temp} Reversed Number: {reverse}");
    }
}