// Fibonacci Number: 

using System;
class Fibonacci
{
    static void Main()
    {
        int n, n1 = 0, n2 = 1, n3;
        Console.Write("Enter number: ");
        n = int.Parse(Console.ReadLine());
        if (n == 0)
        {
            Console.Write($"{n}th fibonacci number is: 0");
        }
        else if (n == 1)
        {
            Console.Write($"{n}th fibonacci number is: 0 1");
        }
        else
        {
            Console.Write($"{n}th fibonacci number is: 0 1 ");
            n -= 2;
            while (n != 0)
            {
                n3 = n1 + n2;
                Console.Write($" {n3} ");
                n1 = n2;
                n2 = n3;
                n -= 1;
            }
            Console.Write(" ");
        }
    }
}