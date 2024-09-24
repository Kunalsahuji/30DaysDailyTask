// SPY Number : A number is said to be a SPY Number if the sum of its digits is exactly equal to the product of its digits.


using System;
class SpyNumber
{
    static void Main()
    {
        int n, rem, temp, sum = 0, product = 1;
        Console.Write("Enter number: ");
        n = int.Parse(Console.ReadLine());
        temp = n;

        while (n > 0)
        {
            rem = n % 10;
            sum += rem;
            product *= rem;
            n /= 10;
        }
        if (sum == product)
        {
            Console.WriteLine($"{temp} is a Spy Number");
        }
        else
        {
            Console.WriteLine($"{temp} is not a Spy Number");
        }

    }


}