//  Find Sum of Digit:
using System;
class Program
{
    static void main()
    {
        int num, i, temp, sum = 0;
        Console.Write("Enter number: ");
        num = int.Parse(Console.ReadLine());
        temp = num;
        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }
        Console.WriteLine($"sum of {temp} is {sum}");
    }
}