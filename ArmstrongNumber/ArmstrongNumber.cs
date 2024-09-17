//  Armstrong Number: A number is said to be an Armstrong number if the sum of its digits each to the power total digit in the number is equal to the number itself.
//  Ex. 1,2,3,4.....,9, 153, 1634, 

using System;

class Program
{
    static void Main()
    {
        int n, temp, rem, sum = 0, count = 0;
        Console.Write("Enter number: ");
        n = int.Parse(Console.ReadLine());

        temp = n;

        while (n > 0)
        {
            n /= 10;
            count += 1;
        }

        n = temp;

        while (n > 0)
        {
            rem = n % 10;
            sum += (int)Math.Pow(rem, count);
            n /= 10;
        }

        if (temp == sum)
        {
            Console.WriteLine($"{temp} is an Armstrong Number");
        }
        else
        {
            Console.WriteLine($"{temp} is not an Armstrong Number");
        }
    }
}
