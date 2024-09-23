//  LCM : 

using System;
class LCM
{
    static void Main()
    {
        int a, b, maxNum, i;
        Console.Write("Enter 1st number: ");
        a = int.Parse(Console.ReadLine());
        Console.Write("Enter 2nd number: ");
        b = int.Parse(Console.ReadLine());
        maxNum = (a > b) ? a : b;
        while (true)
        {
            if (maxNum % a == 0 && maxNum % b == 0)
            {
                Console.WriteLine($"LCM of {a} and {b} = {maxNum}");
                break;
            }
            maxNum++;
        }
    }
}