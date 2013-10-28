using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

    class Program
    {
        static int Compare1(KeyValuePair<int, int> a, KeyValuePair<int, int> b)
        {
            return a.Key.CompareTo(b.Key);
        }

        static int Compare2(KeyValuePair<int, int> a, KeyValuePair<int, int> b)
        {
            return a.Value.CompareTo(b.Value);
        }

        public class Tiles
        {
            public int ID { get; set; }
            public int X { get; set; }
            public int Y { get; set; }

            public bool Fraction { get; set; }

            public int Total_Used { get; set; }
            public int Total_Req { get; set; }

            public Tiles()
            {
                Fraction = false;
            }
        }

        public class Rooms
        {
            public char ID { get; set; }
            public int Tile { get; set; }
            public int X { get; set; }
            public int Y { get; set; }
        }

        static void Main(string[] args)
        {
            string Line = Console.ReadLine();
            string[] LineA = Line.Split(' ');

            int Tile = Convert.ToInt32(LineA[0]);
            int Room = Convert.ToInt32(LineA[1]);

            Dictionary<int,Tiles> MyTiles = new Dictionary<int,Tiles>();
            List<Rooms> MyRooms = new List<Rooms>();

            Dictionary<int, int> TileCounts = new Dictionary<int, int>();

            for (int i = 0; i < Tile; i++)
            {
                Tiles NewTile = new Tiles();
                Line = Console.ReadLine();
                LineA = Line.Split(' ');
                NewTile.ID = Convert.ToInt32(LineA[0]);
                NewTile.Y = Convert.ToInt32(LineA[1]);
                NewTile.X = Convert.ToInt32(LineA[2]);

                MyTiles.Add(NewTile.ID, NewTile);
                TileCounts.Add(NewTile.ID, 0);
            }

            for (int i = 0; i < Room; i++)
            {
                Rooms NewRoom = new Rooms();
                Line = Console.ReadLine();
                LineA = Line.Split(' ');
                NewRoom.ID = LineA[0].ToCharArray()[0];
                NewRoom.Tile = Convert.ToInt32(LineA[1]);
                NewRoom.Y = Convert.ToInt32(LineA[2]);
                NewRoom.X = Convert.ToInt32(LineA[3]);

                MyRooms.Add(NewRoom);
            }

            foreach (Rooms SelectedRoom in MyRooms)
            {
                int i, j;
                Tiles SelectedTile = MyTiles[SelectedRoom.Tile];
                Console.Write(SelectedRoom.ID + Environment.NewLine);
               
                for (i = 0; i < SelectedRoom.X; i++)
                {
                    for (j = 0; j < SelectedRoom.Y + 1; j++)
                    {
                        if (j == SelectedRoom.Y)
                            Console.Write("|");
                        else
                        {
                            if ((((j % (SelectedTile.Y * 2)) + 1) <= SelectedTile.Y) && (((i % (SelectedTile.X * 2)) + 1) <= SelectedTile.X))
                            {
                                Console.Write("X");
                            }
                            else if ((((j % (SelectedTile.Y * 2)) + 1) > SelectedTile.Y) && (((i % (SelectedTile.X * 2)) + 1) > SelectedTile.X))
                            {
                                Console.Write("X");
                            }
                            else
                            {
                                Console.Write("O");
                            }
                        }
                    }
                    Console.Write(Environment.NewLine);
                }
                
                TileCounts[SelectedTile.ID] += Convert.ToInt32((decimal)((SelectedRoom.X * SelectedRoom.Y) / (SelectedTile.X * SelectedTile.Y)));
                if (((double)((SelectedRoom.X * SelectedRoom.Y) * 1.0 / (SelectedTile.X * SelectedTile.Y)) * 1.0) % 1 != 0)
                {
                    TileCounts[SelectedTile.ID] += 1;
                    SelectedTile.Fraction = true;
                }

                SelectedTile.Total_Used += TileCounts[SelectedTile.ID] * (SelectedTile.X * SelectedTile.Y);
                SelectedTile.Total_Req += (SelectedRoom.X * SelectedRoom.Y);
            }

            List<KeyValuePair<int, int>> list = TileCounts.ToList();

            list.Sort(Compare2);
            list.Reverse();

            foreach (KeyValuePair<int, int> pair in list)
            {

                Console.WriteLine(pair.Key);
                Console.WriteLine("{0}", pair.Value);
                Tiles SelectedTile = MyTiles[pair.Key];
                if (SelectedTile.Fraction == true)
                {
                    int fark = SelectedTile.Total_Used - SelectedTile.Total_Req;
                    Console.WriteLine("{1} {0}", fark / SelectedTile.X, SelectedTile.X);
                }
                else
                {
                    Console.WriteLine("-");
                }
            }
            Console.ReadLine();
        }
    }
