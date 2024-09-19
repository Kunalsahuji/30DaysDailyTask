// Find factorial number and factors and sum of factor

using System;
class FactorSum
{
    static void Main()
    {
        int n, i, sum = 0, fact = 1;
        Console.Write("Enter number: ");
        n = int.Parse(Console.ReadLine());

        Console.Write($"Factors of {n} = ");
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                Console.Write($"{i} ");
                sum += i;
            }
            fact *= i;
        }
        Console.WriteLine($"Factorial of {n} = {fact}\nSum of factors = {sum}");
    }
}