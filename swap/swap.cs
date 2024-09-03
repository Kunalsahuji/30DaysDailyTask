// using System;

// namespace Swap
// {
// class Program
// {
// 	static void Main(string[] args)
// 	{
// 		int a, b, c;
// 		Console.Write("Enter 1st number: ");
// 		a = int.Parse(Console.ReadLine());
// 		Console.Write("Enter 1st number: ");
// 		b = int.Parse(Console.ReadLine());
// 		Console.Write("Enter 1st number: ");
// 		c = int.Parse(Console.ReadLine());

// 		Console.WriteLine("Before Swapping:");
// 		Console.WriteLine("a = {0}, b = {1}, c = {2}", a, b, c);
// 		a = a ^ b;
// 		b = a ^ b;
// 		a = a ^ b;
// 		b = b ^ c;
// 		c = b ^ c;
// 		b = b ^ c;
// 		Console.WriteLine("After Swapping:");
// 		Console.WriteLine("a = {0}, b = {1}, c = {2}", a, b, c);
// 	}
// }
// }



using System;

namespace Swap
{
    class Program
    {
        static void Main(string[] args)
        {
            int a,
                b,
                c;
            Console.Write("Enter 1st number:");
            a = int.Parse(Console.ReadLine());
            Console.Write("Enter 2nd number: ");
            b = int.Parse(Console.ReadLine());
            Console.Write("Enter 3rd number: ");
            c = int.Parse(Console.ReadLine());
            Console.WriteLine("Before Swapping: ");
            Console.WriteLine("a = {0}, b = {1}, c = {2}", a, b, c);

            a = a + b + c;
            b = a - b - c;
            c = a - b - c;
            a = a - b - c;

            Console.WriteLine("After Swapping: ");
            Console.WriteLine("a = {0}, b = {1}, c = {2}", a, b, c);
        }
    }
}
