using System;

namespace program
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, sum = 0;
            Console.Write("Enter a number: ");
            n = int.Parse(Console.ReadLine());

            for (int i = 0; i <= n; i++)
            {
                sum += i;
            }

            Console.WriteLine($"Sum of numbers from 0 to {n} is {sum}");
        }
    }
}