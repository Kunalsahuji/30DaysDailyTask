//  Find out Largest number amoung 3 numbers.

// using System;

// class Program
// {
//     static void Main()
//     {
//         Console.Write("Enter the first number: ");
//         int a = int.Parse(Console.ReadLine());

//         Console.Write("Enter the second number: ");
//         int b = int.Parse(Console.ReadLine());

//         Console.Write("Enter the third number: ");
//         int c = int.Parse(Console.ReadLine());

//         if (a >= b && a >= c)
//         {
//             Console.WriteLine("The largest number is: " + a);
//         }
//         else if (b >= a && b >= c)
//         {
//             Console.WriteLine("The largest number is: " + b);
//         }
//         else
//         {
//             Console.WriteLine("The largest number is: " + c);
//         }
//     }
// }

// -------------------------------------------

using System;
class Program
{
    static void Main()
    {
        Console.Write("Enter the first number: ");
        int a = int.Parse(Console.ReadLine());

        Console.Write("Enter the second number: ");
        int b = int.Parse(Console.ReadLine());

        Console.Write("Enter the third number: ");
        int c = int.Parse(Console.ReadLine());

        if (a == b && a == c)
        {
            Console.WriteLine("All numbers are eqaul: a= {0}, b= {1}, c = {2}", a, b, c);
        }
        else if (a == b && a > c)
        {
            Console.WriteLine("Both numbers are eqaul and the largest. a = {0}, b = {1}", a, b);
        }
        else if (a == c && a > b)
        {
            Console.WriteLine("Both the numbers are equal and the largest a = {0}, c = {1}", a, c);
        }
        else if (b == c && b > a)
        {
            Console.WriteLine("Both the numbers are equal and the largest b = {0}, c = {1}", b, c);
        }
        else if (a > b && a > c)
        {
            Console.WriteLine("a = {0} is the largest number", a);
        }
        else if (b > c && b > a)
        {
            Console.WriteLine("b = {0} is the largest number", b);
        }
        else
        {
            Console.WriteLine("c {0} is the largest number", c);
        }
    }
}