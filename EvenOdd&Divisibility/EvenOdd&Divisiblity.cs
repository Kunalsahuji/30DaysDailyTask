// Check given number is even or odd

// using System;
// class Program
// {
//     static void Main()
//     {
//         Console.Write("Enter number to check: ");
//         string input = Console.ReadLine();
//         if (int.TryParse(input, out int num))
//         {
//             if (num % 2 == 0)
//             {
//                 Console.WriteLine($"num = {num} is a Even Number.");
//             }
//             else
//             {
//                 Console.WriteLine($"num = {num} is a Odd Number.");
//             }
//         }
//         else
//         {
//             Console.WriteLine("You entered wrong input! Please enter correct number.");

//         }
//     }
// }

using System;
class Program
{
    static void Main()
    {
        Console.Write("Enter Divident: ");
        int Divident = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter Divisor: ");
        int Divisor = Convert.ToInt32(Console.ReadLine());

        if (Divident % Divisor == 0)
        {
            Console.WriteLine($"{Divident} is divisible by {Divisor}.");
        }
        else
        {
            Console.WriteLine($"{Divident} is not divisible by {Divisor}.");

        }
    }
}
