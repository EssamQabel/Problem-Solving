using System;
 
namespace MyNamespaceMagnitics
{
    class Program
    {
        static void Main()
        {
            int n = int.Parse(Console.ReadLine());
            string[] input = Console.ReadLine().Split(' ');
 
            int numberOfInv = 0;
            int numberOfCri = 0;
 
            for (int i = 0; i < input.Length; i++)
                if (int.Parse(input[i]) > 0)
                    numberOfInv += int.Parse(input[i]);
                else
                {
                    if (numberOfInv == 0) numberOfCri++;
                    else numberOfInv--;
                }
            Console.WriteLine(numberOfCri);
        }
    }
}