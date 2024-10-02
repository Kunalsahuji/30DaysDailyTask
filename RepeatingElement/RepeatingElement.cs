using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        Console.Write("Enter number: ");
        int n = int.Parse(Console.ReadLine());

        Console.Write("Enter values: ");
        string[] input = Console.ReadLine().Split();
        int[] arr = Array.ConvertAll(input, int.Parse);

        Dictionary<int, int> dict = new Dictionary<int, int>();

        foreach (int num in arr)
        {
            if (dict.ContainsKey(num))
                dict[num]++;
            else
                dict[num] = 1;
        }

        Console.Write("Repeating elements are: ");
        foreach (var item in dict)
        {
            if (item.Value > 1)
                Console.Write(item.Key + " ");
        }
    }
}
