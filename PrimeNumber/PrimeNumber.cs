// Prime Number: A number is said to be a Prime number if it is only divisible by 1 and itself.
// 1 is not a Prime Number
// Negative numbers are not the prime numbers.
// Prime Numbers series goes like: 2, 3, 5, 7, 9, 11, 13, 17, 19, 23........

using System;
class PrimeNumber
{
    static void Main()
    {
        int n, i, flag = 0;
        Console.Write("Enter number: ");
        n = int.Parse(Console.ReadLine());

        if (n <= 1)
        {
            Console.WriteLine($"{n} is not a Prime Number");
        }
        else
        {
            for (i = 2; i * i <= n; i++)
            {
                if (n % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                Console.WriteLine($"{n} is not a Prime Number");
            }
            else
            {
                Console.WriteLine($"{n} is a Prime Number");

            }
        }
    }
}