using System;
namespace ConsoleApplication
{
    class Program
    {
        static void Main(string[] args)
        {
            int n = int.Parse(Console.ReadLine());
            int games = 0;
            int[,] kits = new int[n,2];
            
 
            for(int i = 0; i < n; i++)
            {
                string[] input = Console.ReadLine().Split(' ');
                kits[i, 0] = int.Parse(input[0]);
                kits[i, 1] = int.Parse(input[1]);
            }
 
            for (int numberOfTeam = 0; numberOfTeam < n; numberOfTeam++)
            {
                for (int numberOfAwayTeam = 0; numberOfAwayTeam < n; numberOfAwayTeam++)
                {
                    if (numberOfTeam != numberOfAwayTeam)
                    {
                        if (kits[numberOfTeam, 0] == kits[numberOfAwayTeam, 1])
                            games++;
                    }
                }
            }
 
            Console.WriteLine(games);
        }
    }
}