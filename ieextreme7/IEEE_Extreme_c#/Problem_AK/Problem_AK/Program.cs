using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Program
{
    public class Noodle
    {
        public List<int> Inputs = new List<int>();
        public List<int> Outputs = new List<int>();

        public int Weight = 0;
    }

    static void Main(string[] args)
    {
        int N = Convert.ToInt32(Console.ReadLine().ToString());
        Dictionary<int, Noodle> Noodles = new Dictionary<int, Noodle>();

        for (int i = 1; i <= N; i++)
            Noodles.Add(i,new Noodle());

        for (int i = 0; i < (N - 1); i++)
        {
            string Line = Console.ReadLine();
            string[] LineA = Line.Split(' ');

            int NoodleID = Convert.ToInt32(LineA[0]);
            int NoodleOut = Convert.ToInt32(LineA[1]);

            Noodle CurrentNoodle = Noodles[NoodleID];
            CurrentNoodle.Outputs.Add(NoodleOut);

            CurrentNoodle = Noodles[NoodleOut];
            CurrentNoodle.Inputs.Add(NoodleID);
        }

        for (int i = 1; i <= N; i++)
        {
            Noodle CurrentNoodle = Noodles[i];
            if (CurrentNoodle.Inputs.Count == 0)
            {
                CurrentNoodle.Weight = 1;
            }
        }

        for (int i = 1; i <= N; i++)
        {
            Noodle CurrentNoodle = Noodles[i];
            if (CurrentNoodle.Outputs.Count == 0)
            {
                CalculateWeight(Noodles, i);
            }
        }

        int Buyuk = Noodles[1].Weight;

        for (int i = 1; i <= N; i++)
        {
            Noodle CurrentNoodle = Noodles[i];
            if (CurrentNoodle.Weight > Buyuk)
                Buyuk = CurrentNoodle.Weight;
        }

        for (int i = 1; i <= N; i++)
        {
            Noodle CurrentNoodle = Noodles[i];
            if (CurrentNoodle.Weight == Buyuk)
                Console.WriteLine("{0}", i, Environment.NewLine);
        }
        Console.ReadLine();
    }

    public static void CalculateWeight(Dictionary<int, Noodle> Noodles, int Current)
    {
        Noodle CurrentNoodle = Noodles[Current];
        foreach (int UID in CurrentNoodle.Inputs)
        {
            Noodle Temp = Noodles[UID];
            if (Temp.Weight == 0)
                CalculateWeight(Noodles, UID);
            CurrentNoodle.Weight += Temp.Weight / Temp.Outputs.Count;
        }
    }
}
