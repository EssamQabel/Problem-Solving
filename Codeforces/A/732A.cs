using System;
 
namespace CodeForces
{
    class MainClass
    {
        static void Main(string[] args)
        {
            int price, change, sum = 1;
            string[] input = Console.ReadLine().Split(' ');
            price = int.Parse(input[0]);
            change = int.Parse(input[1]);
 
            while (true)
            {
                if ((price * sum) % 10 == change || (price * sum) % 10 == 0)
                {
                    Console.WriteLine(sum);
                    return;
                }
                sum++;
            }
        }
    }
}