//  Pronic Number : It is also known as an Oblong number, is a type of natural number that is the product of two consecutive integers
// Mathematically, a pronic number can be represented as : n(n+1)  ==> 3(3+4) = 12

using System;
class PronicNumber
{
    static void Main()
    {
        int n, i;
        bool flag;
        flag = false;
        Console.Write("Enter number: ");
        n = int.Parse(Console.ReadLine());
        for (i = 1; i <= n; i++)
        {
            if (i * (i + 1) == n)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            Console.WriteLine($"{n} is a Pronic Number");
        }
        else
        {
            Console.WriteLine($"{n} is not a Pronic Number");

        }
    }
}
