using System;
 
namespace MyNamespaceMagnitics
{
    class Program
    {
        static void Main()
        {
            int n = int.Parse(Console.ReadLine());
            string input = Console.ReadLine();
 
            int total = 0;
 
            for (int i = 0; i < n - 1; i++)
                if (input[i] == input[i + 1]) total++;
 
            Console.WriteLine(total);
        }
    }
}