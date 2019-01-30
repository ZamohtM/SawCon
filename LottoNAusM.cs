using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LottoNAusM
{
    class Program
    {
        static void Main(string[] args)
        {

            UInt16 N = 6;
            UInt16 M = 45;

          

            var numbers = new List<UInt16>();

            for (UInt16 i = 0; i < M; i++)
            {
                numbers.Add(i);
            }

            var rnd = new Random();

            var selectedNumbers = new List<UInt16>();

            for (int i = 0; i < N; i++)
            {
                var itemToRemove = rnd.Next(0, numbers.Count);

                UInt16 selectedNumber = numbers[itemToRemove];
                selectedNumbers.Add(selectedNumber);

                numbers.RemoveAt(itemToRemove);
            }

            selectedNumbers.Sort();

            foreach (var item in selectedNumbers)
            {
                Console.WriteLine(item);

            }

            using (StreamWriter writer = new StreamWriter("test.txt")) { 

            foreach (var item in selectedNumbers)
            {
                writer.WriteLine(Convert.ToString(item));
            }

        }
        }
    }
}
