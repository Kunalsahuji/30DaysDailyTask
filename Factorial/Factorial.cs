// Factorial Number: 
// using System;
// class Program
// {
//     static void Main()
//     {
//         int n, temp, fact = 1;
//         Console.Write("Enter number: ");
//         n = int.Parse(Console.ReadLine());
//         temp = n;
//         while (n > 0)
//         {
//             fact *= n;
//             n -= 1;
//         }
//         Console.WriteLine($"Factorial of {temp} = {fact}");
//     }
// }


// Using Recursion:

using System;

class Program
{
    static int Factorial(int n)
    {
        if (n < 0) return -1; 
        if (n == 0 || n == 1) return 1; 
        return n * Factorial(n - 1);
    }

    static void Main()
    {
        int number = 5;
        Console.WriteLine($"Factorial of {number} is: {Factorial(number)}");
    }
}
