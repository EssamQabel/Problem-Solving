using System;
 
namespace MyNameSpace
{
    class Program
    {
        static void Main(string[] args)
        {
            int numberOfColumns = int.Parse(Console.ReadLine());
            string[] cubes = Console.ReadLine().Split(' ');
            int[] n = new int[numberOfColumns];
            for (int i = 0; i < numberOfColumns; i++)
                n[i] = int.Parse(cubes[i]);
            Array.Sort(n);
            foreach (int i in n) Console.Write(i + " ");
 
            Console.ReadLine();
        }
    }
}