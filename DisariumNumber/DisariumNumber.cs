// Write a program to input a number and find whether the number is a Disarium number or not:
//  A number is said to be Disarium if sum of its digits powered with their respective positions is equal to the number itself.
//  Sample Input: 135 Sample Output: 135 ==> 1 1 + 3 2 + 5 3 = 135 So, 135 is a Disarium number.

using System;
class Program
{
    static void Main()
    {
        int n, rem, temp, sum = 0, count = 0;
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
            count -= 1;
            n /= 10;
        }
        if (temp == sum)
        {
            Console.WriteLine($"{temp} is a Disarium Number");
        }
        else
        {
            Console.WriteLine($"{temp} is not a Disarium Number");

        }
    }

}