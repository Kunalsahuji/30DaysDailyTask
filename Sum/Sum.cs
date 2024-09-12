// find a sum of n numbers from 0 to n numbers:

// using System;

// namespace program
// {
//     class Program
//     {
//         static void Main(string[] args)
//         {
//             int n, sum = 0;
//             Console.Write("Enter a number: ");
//             n = int.Parse(Console.ReadLine());

//             for (int i = 0; i <= n; i++)
//             {
//                 sum += i;
//             }

//             Console.WriteLine($"Sum of numbers from 0 to {n} is {sum}");
//         }
//     }
// }

// --------------------------------------------------------------

// find sum of n number's square : 

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
                sum += i * i;
                Console.WriteLine($"square of {i} = {i * i}");
            }

            Console.WriteLine($"Sum of the first {n} square is {sum}");
        }
    }
}


// find sum of cube of n numbers: 

using System;

namespace program
{
    class Program
    {
        static void Main(string[] args)
        {
            int n, i, sum = 0;
            Console.Write("Enter number: ");
            n = int.Parse(Console.ReadLine());

            for (i = 0; i <= n; i++)
            {
                sum += i * i * i;
                Console.WriteLine($"cube of {i} = {i * i * i} and sum = {sum}");
            }
            Console.WriteLine($"sum of cube of first {n} cube number's = {sum}");
        }
    }
}
