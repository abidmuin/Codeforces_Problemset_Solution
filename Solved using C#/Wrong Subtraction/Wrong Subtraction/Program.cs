using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//https://codeforces.com/problemset/problem/977/A

namespace Wrong_Subtraction
{
    class Program
    {
        static void Main(string[] args)
        {
            var line = Console.ReadLine();
            string[] tokens = line.Split(' ');
            int[] input = Array.ConvertAll(tokens, int.Parse);
            int n = input[0];
            int k = input[1];

            for(int i = 0; i < k; i++)
            {
                if (n % 10 == 0)
                {
                    n /= 10;
                }
                else if (n % 10 != 0)
                {
                    n--;
                }
            }
            Console.WriteLine(n);
        }
    }
}
