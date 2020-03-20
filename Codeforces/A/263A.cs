using System;
using System.Collections;
 
namespace MyNameSpace
{
    class Program
    {
 
        static string[] input;
        static ArrayList array = new ArrayList();
 
        static int numberOfMoves = 0;
 
        static int colIndex, rowIndex;
 
        static void Main(string[] args)
        {
            for (int it = 0; it < 5; it++)
            {
                input = Console.ReadLine().Split(' ');
                for (int line = 0; line < 5; line++)
                {
                    array.Add(int.Parse(input[line]));
                }
            }
 
            GetIndecies();
 
            Console.WriteLine(NumberOfMoves());
            
        }
 
        static int NumberOfMoves()
        {
            while (rowIndex != 2)
            {
                if (rowIndex < 2)
                {
                    numberOfMoves++;
                    rowIndex++;
                }
                else
                {
                    numberOfMoves++;
                    rowIndex--;
                }
            }
            while (colIndex != 2)
            {
                if (colIndex < 2)
                {
                    numberOfMoves++;
                    colIndex++;
                }
                else
                {
                    numberOfMoves++;
                    colIndex--;
                }
            }
            return numberOfMoves;
        }
 
        static void GetIndecies()
        {
            for (int i = 0; i < array.Count; i++)
                if ((int)array[i] == 1)
                {
                    rowIndex = i / 5;
                    colIndex = i - (rowIndex * 5);
                    return;
                }
        }
 
        static void PrintGrid()
        {
            for (int it = 0; it < 5; it++)
            {
                for (int line = 0; line < 5; line++)
                {
                    Console.Write(array[line + (it * 5)] + " ");
                }
                Console.WriteLine();
            }
        }
    }
}