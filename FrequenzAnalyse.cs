using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;


namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            string inputFile = @"R:\Unterricht\cwurzinger\__2YAWIB\goethe_faust.txt";

            Dictionary<char, UInt64> dictionary = new Dictionary<char, UInt64>();


             StreamReader sr = new StreamReader(inputFile);

            {
                string line;
                while ((line = sr.ReadLine()) != null)
                {
                    char[] characters = line.ToCharArray();

                    foreach (var c in characters)
                    {
                        if (dictionary.ContainsKey(c))
                        {
                            dictionary[c]++;
                        }
                        else
                        {
                            dictionary.Add(c, 1);
                        }
                    }
                }
            }

            var list = dictionary.ToList();
            list.Sort((b, a) => b.Value.CompareTo(a.Value));

            foreach (var item in list)
            {
                Console.WriteLine(item.Key.ToString() + ": " + item.Value.ToString());
            }
        }
    }
}
