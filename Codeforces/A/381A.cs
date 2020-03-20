using System;
using System.Collections;
 
namespace MyNamespaceMagnitics
{
    class Program
    {
        static void Main()
        {
            int[] scores = new int[2];
            int turn = 0;
 
            int n = int.Parse(Console.ReadLine());
 
            string[] input = Console.ReadLine().Split(' ');
 
            ArrayList numbers = new ArrayList();
 
            foreach (string inputElement in input)
                numbers.Add(int.Parse(inputElement));
 
            while (numbers.Count != 0)
            {
                if ((int)numbers[0] > (int)numbers[numbers.Count - 1])
                {
                    scores[turn] += (int)numbers[0];
                    turn = turn == 0 ? 1 : 0;
                    numbers.Remove(numbers[0]);
                }
                else if ((int)numbers[numbers.Count - 1] > (int)numbers[0])
                {
                    scores[turn] += (int)numbers[numbers.Count - 1];
                    turn = turn == 0 ? 1 : 0;
                    numbers.Remove(numbers[numbers.Count - 1]);
                }
                else
                {
                    scores[turn] += (int)numbers[0];
                    turn = turn == 0 ? 1 : 0;
                    numbers.Remove(numbers[numbers.Count - 1]);
                }
 
            }
 
            Console.WriteLine(scores[0] + " " + scores[1]);
        }
    }
}