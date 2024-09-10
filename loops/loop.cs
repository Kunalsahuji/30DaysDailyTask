// // print the table of n number :

// using System;

// class TableOfN
// {
//     static void Main(string[] args)
//     {
//         Console.Write("Enter a number: ");
//         int n = Convert.ToInt32(Console.ReadLine());

//         Console.WriteLine("Table of " + n + ":");
//         for (int i = 1; i <= 10; i++)
//         {
//             Console.WriteLine(n + " x " + i + " = " + n * i);
//         }
//     }
// }


using System;

class TableOfN
{
    static void Main(string[] args)
    {
        Console.Write("Enter a number: ");
        int n = Convert.ToInt32(Console.ReadLine());


        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                Console.WriteLine($"\n{i} is even");
            }
            else
            {
                Console.WriteLine($"\n{i} is odd");

            }
        }

    }
}