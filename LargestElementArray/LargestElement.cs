using System;
class LargestElement
{
    // Renamed the method to avoid conflict with the class name
    void FindLargestElement(int n, int[] arr)
    {
        int maximum = arr[0];
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maximum)
            {
                maximum = arr[i];
            }
        }
        Console.WriteLine($"Largest Element in the array is: {maximum}");
    }

    static void Main()
    {
        Console.Write("Enter number: ");
        int n = int.Parse(Console.ReadLine());

        Console.Write("Enter values: ");
        string[] input = Console.ReadLine().Split();
        int[] arr = Array.ConvertAll(input, int.Parse);

        // Create an instance of LargestElement to call the non-static method
        LargestElement obj = new LargestElement();
        obj.FindLargestElement(n, arr);
    }
}
