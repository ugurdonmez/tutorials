using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

class Solution
{
    static void Main(string[] args)
    {
        string Line1 = Console.ReadLine();
        string Line2 = Console.ReadLine();

        List<string> Line1List = new List<string>(Line1.Split(' '));
        List<string> Line2List = new List<string>(Line2.Split(' '));

        List<string> ShowList = new List<string>();
        List<string> AcceptableShows = new List<string>();

        int N = Convert.ToInt32(Line1List[0], 10);
        Line1List.RemoveAt(0);
        Line1List.Sort();

        int M = Convert.ToInt32(Line2List[0], 10);
        Line2List.RemoveAt(0);

        bool IsOverLap = false;
        string OverlapText="";
        for(int i = 0;i < 2 * M;i++)
        {
            if (i % 2 == 0)
            {
                int AvaibleTime = Convert.ToInt32(Line2List[i].ToString());
                AcceptableShows.Clear();

                foreach (string Zaman in Line1List)
                {
                    if (Convert.ToInt32(Zaman) <= AvaibleTime)
                    {
                        AcceptableShows.Add(Zaman);
                    }
                }
                if (AcceptableShows.Count == 0)
                {
                    OverlapText = string.Format("Overlap {0} of Level {1}", 10, 1);
                    return;
                }
                AcceptableShows.Sort();
                AcceptableShows.Reverse();

                List<List<string>> Temp = GetSubsets(AcceptableShows);

                List<int> Durations = new List<int>();
                foreach (var t in Temp)
                {
                    int Sum = 0;
                    foreach (string t2 in t)
                    {
                        Sum += Convert.ToInt32(t2);
                    }
                    Durations.Add(Sum);
                }

                int j = 0;
                int buyuk = 0;
                int Overlap = 0;

                foreach (var t in Temp)
                {
                    if (Durations[j] > Durations[buyuk] && Durations[j] <= AvaibleTime)
                    {
                        buyuk = j;

                        if (Durations[buyuk] != AvaibleTime)
                        {
                            Overlap = i;
                        }
                    }
                    j++;
                }

                if (Durations[buyuk] != AvaibleTime)
                {
                    int OverlapTime = AvaibleTime - Durations[buyuk];
                    if (OverlapTime < 0)
                        OverlapTime *= -1;

                    OverlapText = string.Format("Overlap {0} of Level {1}", OverlapTime, (Overlap / 2) + 1);
                    IsOverLap = true;
                }

                var SelectedShows = Temp[buyuk];
                SelectedShows.Sort();
                if (SelectedShows.Count != 0)
                {
                    foreach (string t in SelectedShows)
                    {
                        ShowList.Add(t);
                        try
                        {
                            Line1List.Remove(t);
                        }
                        catch
                        {
                        }
                    }
                }
                else
                {
                    Console.WriteLine("Overflap #2");
                    //Overflap Olmak Zorunda
                }
            }
        }

        if (Line1List.Count > 0)
        Line1List.Sort();
        foreach (string Element in Line1List)
        {
            ShowList.Add(Element);
        }

        ShowList.ForEach(i => Console.Write("{0} ", i));

        if (IsOverLap)
            Console.WriteLine(Environment.NewLine + OverlapText);
        else
            Console.WriteLine(Environment.NewLine + "Overlap Zero");
            

        Console.Write(Environment.NewLine);

        Console.ReadLine();
    }

    static List<List<T>> GetSubsets<T>(IEnumerable<T> Set)
    {
        var set = Set.ToList<T>();

        List<List<T>> subsets = new List<List<T>>();

        subsets.Add(new List<T>());

        for (int i = 1; i < set.Count; i++)
        {
            subsets.Add(new List<T>() { set[i - 1] });

            List<List<T>> newSubsets = new List<List<T>>();

            for (int j = 0; j < subsets.Count; j++)
            {
                var newSubset = new List<T>();
                foreach (var temp in subsets[j])
                    newSubset.Add(temp);

                newSubset.Add(set[i]);


                newSubsets.Add(newSubset);
            }

            subsets.AddRange(newSubsets);
        }

        subsets.Add(new List<T>() { set[set.Count - 1] });

        return subsets;
    }
}