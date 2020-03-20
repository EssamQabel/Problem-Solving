namespace MainProgram
{
    class Program
    {
        static void Main(string[] args)
        {
            int problems = int.Parse(System.Console.ReadLine());
            int problemsSolved = 0;
 
            for (int i = 0; i < problems; i++)
            {
                int submits = 0;
                string[] inputString = System.Console.ReadLine().Split(' ');
                foreach (string s in inputString)
                    if (int.Parse(s) == 1) submits++;
                if (submits >= 2) problemsSolved++;
            }
 
            System.Console.WriteLine(problemsSolved);
        }
    }
}