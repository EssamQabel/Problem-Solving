namespace MainProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            int years = 0;
 
            string[] input = System.Console.ReadLine().Split(' ');
            int aWeight = int.Parse(input[0]);
            int bWeight = int.Parse(input[1]);
            while (aWeight <= bWeight)
            {
                aWeight = aWeight * 3;
                bWeight = bWeight * 2;
                years++;
            }
            System.Console.WriteLine(years);
 
 
        }
    }
}