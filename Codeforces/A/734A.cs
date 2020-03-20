using System;
 
namespace MainProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            int Anton = 0;
            int Danik = 0;
 
            int numberOfGame = int.Parse(Console.ReadLine());
            char[] input = Console.ReadLine().ToCharArray();
 
            for (int i = 0; i < numberOfGame; i++)
            {
                switch (input[i])
                {
                    case 'A':
                        Anton++;
                        break;
                    case 'D':
                        Danik++;
                        break;
                }
            }
 
                if (Anton > Danik) Console.WriteLine("Anton");
                else if (Anton < Danik) Console.WriteLine("Danik");
                else Console.WriteLine("Friendship");
        }
    }
}