//  strong number: A number is said to be a strong number if the sum of the factorial of the digit is equal to the number itself. Ex. 1, 2, 145
using System;
class Program
{
    static int Factorial(int n)
    {
        int fact = 1;
        while (n > 0)
        {
            fact *= n;
            n -= 1;
        }
        return fact;
    }
    static void Main()
    {
        int n, temp, sum = 0;
        Console.Write("Enter number: ");
        n = int.Parse(Console.ReadLine());
        temp = n;
        while (n > 0)
        {
            sum += Factorial(n % 10);
            n /= 10;
        }
        if (temp == sum)
        {
            Console.WriteLine($"{temp} is a Strong Number");
        }
        else
        {
            Console.WriteLine($"{temp} is not a Strong Number");

        }
    }
}