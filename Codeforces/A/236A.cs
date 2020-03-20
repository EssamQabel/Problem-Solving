using System;
 
namespace MainProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            string input = Console.ReadLine();
            System.Collections.ArrayList dElements = new System.Collections.ArrayList();
            for (int i = 0; i < input.Length; i++)
                if (!dElements.Contains(input[i])) dElements.Add(input[i]);
            if(dElements.Count % 2 == 0)
                Console.WriteLine("CHAT WITH HER!");
            else
                Console.WriteLine("IGNORE HIM!");
        }
    }
}