using System;
using System.Linq;

class Program {
    static int[] RemoveDuplicates(int[] arr) {
        return arr.Distinct().ToArray();
    }

    static void Main() {
        int[] arr = { 1, 1, 2, 3, 3, 4, 4, 5 };
        int[] result = RemoveDuplicates(arr);
        Console.WriteLine(string.Join(" ", result));
    }
}
