// WAP to check that given number is Perfect or not

using System;
class PerfectNumber
{
    static void Main()
    {
        int n, i, sum = 0;
        Console.Write("Enter Number: ");
        n = int.Parse(Console.ReadLine());

        for (i = 1; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }
        if (sum == n)
        {
            Console.WriteLine($"{n} is a Perfect Number");
        }
        else
        {
            Console.WriteLine($"{n} is not a Perfect Number");
        }
    }
}