// Reverse the array by k rotation: 
using System;
class K_Rotation
{
    static void ReverseArrayKrotation(int[] arr, int start, int end)
    {
        while (start < end)
        {
            arr[start] ^= arr[end];
            arr[end] ^= arr[start];
            arr[start] ^= arr[end];
            start++;
            end--;
        }
    }
    static void Main()
    {
        int n, k, i;
        Console.Write("Enter number: ");
        n = int.Parse(Console.ReadLine());
        int[] arr = new int[n];
        Console.Write("Enter values: ");
        string[] input = Console.ReadLine().Split();
        for (i = 0; i < n; i++)
        {
            arr[i] = int.Parse(input[i]);
        }
        Console.Write("Enter rotation: ");
        k = int.Parse(Console.ReadLine());
        if (k > n)
        {
            k %= n;
        }
        ReverseArrayKrotation(arr, 0, n - 1);
        ReverseArrayKrotation(arr, 0, k - 1);
        ReverseArrayKrotation(arr, k, n - 1);
        for (i = 0; i < n; i++)
        {
            Console.Write(arr[i] + " ");
        }
    }
}