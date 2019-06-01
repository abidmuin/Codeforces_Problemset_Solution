using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

//https://codeforces.com/problemset/problem/791/A
namespace Bear_and_Big_Brother
{
    class Program
    {
        static void Main(string[] args)
        {
            var line = Console.ReadLine();
            string[] token = line.Split(' ');
            int[] input = Array.ConvertAll(token, int.Parse);
            int Limak = input[0];
            int Bob = input[1];

            int count = 0;
            while (Limak <= Bob)
            {
                count++;
                Limak = 3 * Limak;
                Bob = 2 * Bob;
            }
            Console.WriteLine(count);
        }

    }
}
