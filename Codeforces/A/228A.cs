using System;
using System.Collections.Generic;
 
namespace CodeForces
{
    class MainClass
    {
        static void Main(string[] args)
        {
            string[] input = Console.ReadLine().Split(' ');
            int numberOfShoes = 0;
 
            List<int> inputList = new List<int>();
            inputList.Add(int.Parse(input[0]));
            for (int i = 1; i < input.Length; i++)
            {
                int shoe = int.Parse(input[i]);
                for(int j = 0; j < inputList.Count; j++)
                {
                    if (inputList[j] == shoe)
                    {
                        numberOfShoes++;
                        break;
                    }
                }
                inputList.Add(shoe);
            }
 
            Console.WriteLine(numberOfShoes);
                
        }
    }
}