// Reverse Array: 

using System;

class Program {
    static void ReverseArray(int n, int[] arr) {
        int start = 0, end = n - 1;

        while (start < end) {
            arr[start] ^= arr[end];
            arr[end] ^= arr[start];
            arr[start] ^= arr[end];
            start++;
            end--;
        }

        Console.Write("Reverse Array = ");
        for (int i = 0; i < n; i++) {
            Console.Write(arr[i] + " ");
        }
    }

    static void Main() {
        Console.Write("Enter number: ");
        int n = int.Parse(Console.ReadLine());

        int[] arr = new int[n];
        Console.Write("Enter values: ");
        string[] input = Console.ReadLine().Split();
        for (int i = 0; i < n; i++) {
            arr[i] = int.Parse(input[i]);
        }

        Console.Write("Array = ");
        for (int i = 0; i < n; i++) {
            Console.Write(arr[i] + " ");
        }

        ReverseArray(n, arr);
    }
}
