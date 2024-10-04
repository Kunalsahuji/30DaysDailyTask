// Maximum subarray sum (Kadane's Problem):

using System;

class Program
{
    static int MaxSubArraySum(int[] arr, int n)
    {
        int maxSum = int.MinValue;
        int sums = 0;

        for (int i = 0; i < n; i++)
        {
            sums += arr[i];
            if (sums > maxSum)
                maxSum = sums;
            if (sums < 0)
                sums = 0;
        }
        return maxSum;
    }

    static void Main(string[] args)
    {
        Console.Write("Enter number: ");
        int n = int.Parse(Console.ReadLine());

        Console.Write("Enter values: ");
        string[] input = Console.ReadLine().Split();
        int[] arr = Array.ConvertAll(input, int.Parse);

        int result = MaxSubArraySum(arr, n);
        Console.WriteLine(result);
    }
}
