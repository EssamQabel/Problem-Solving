using System;
 
namespace MyNamespaceMagnitics
{
    class Program
    {
        static void Main()
        {
            int totalCals = 0;
 
            string[] inputCals = Console.ReadLine().Split(' ');
            int[] cals = new int[4];
            for (int i = 0; i < inputCals.Length; i++) cals[i] = int.Parse(inputCals[i]);
 
            char[] input = Console.ReadLine().ToCharArray();
            for (int i = 0; i < input.Length; i++)
            {
                int curPos = int.Parse(input[i].ToString());
                switch (curPos)
                {
                    case 1:
                        totalCals += cals[0];
                        break;
                    case 2:
                        totalCals += cals[1];
                        break;
                    case 3:
                        totalCals += cals[2];
                        break;
                    case 4:
                        totalCals += cals[3];
                        break;
                }
            }
 
            Console.WriteLine(totalCals);
        }
    }
}