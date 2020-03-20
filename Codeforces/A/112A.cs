using System;
 
namespace MyNamespace
{
    class Program
    {
        static void Main()
        {
            char[] first = Console.ReadLine().ToLower().ToCharArray();
            char[] secound = Console.ReadLine().ToLower().ToCharArray();
 
            for (int i = 0; i < first.Length; i++)
            {
                int firstElement = first[i];
                int secoundElement = secound[i];
 
                if (firstElement > secoundElement)
                {
                    Console.WriteLine("1");
                    return;
                }
                else if (firstElement < secoundElement)
                { 
                    Console.WriteLine("-1");
                    return;
                }
            }
            Console.WriteLine("0");
        }
    }
}