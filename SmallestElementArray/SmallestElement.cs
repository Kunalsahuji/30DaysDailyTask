using System;

class Program {
    static void Main() {
        Console.Write("Enter number: ");
        int n = int.Parse(Console.ReadLine());

        Console.Write("Enter values: ");
        string[] input = Console.ReadLine().Split();
        int[] arr = Array.ConvertAll(input, int.Parse);

        int minimum = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] < minimum) {
                minimum = arr[i];
            }
        }

        Console.WriteLine($"Minimum number is {minimum}");
    }
}
