using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

    class Solution
    {
        public static string IntToString(int value, char[] baseChars)
        {
            string result = string.Empty;
            int targetBase = baseChars.Length;

            do
            {
                result = baseChars[value % targetBase] + result;
                value = value / targetBase;
            }
            while (value > 0);

            return result;
        }

        static void Main(string[] args)
        {
            try
            {
                Stack<string> MyStack = new Stack<string>();
                string line = Console.ReadLine();
                List<string> MyList = new List<string>(line.Split(' '));
                if (MyList.Count > 20)
                {
                    Console.Write("ERROR");
                    return;
                }

                int Number = 0;
                bool IsNumber = false;
                foreach (char c in line)
                {
                    if (c.ToString() == " ")
                    {
                        if (IsNumber)
                        {
                            if (Number > Convert.ToInt32("FFFF", 16))
                            {
                                Console.Write("ERROR");
                                line = Console.ReadLine();
                                return;
                            }
                            MyStack.Push(Number.ToString());
                            Number = 0;
                        }
                    }
                    else
                    {
                        if ((Char.IsNumber(c)) || (c.ToString().ToUpper() == "A") || (c.ToString().ToUpper() == "B") || (c.ToString().ToUpper() == "C") || (c.ToString().ToUpper() == "D") || (c.ToString().ToUpper() == "E") || (c.ToString().ToUpper() == "F"))
                        {
                            Number *= 16;
                            Number += Convert.ToInt32(c.ToString(), 16);
                            IsNumber = true;
                        }
                        else
                        {
                            IsNumber = false;
                            if (c.ToString() == "+")
                            {
                                if (MyStack.Count < 2)
                                {
                                    Console.Write("ERROR");
                                    line = Console.ReadLine();
                                    return;
                                }
                                int Number2 = Convert.ToInt32(MyStack.Pop());
                                int Number1 = Convert.ToInt32(MyStack.Pop());
                                Number1 += Number2;
                                MyStack.Push(Number1.ToString());
                            }
                            else if (c.ToString() == "-")
                            {
                                if (MyStack.Count < 2)
                                {
                                    Console.Write("ERROR");
                                    line = Console.ReadLine();
                                    return;
                                }
                                int Number2 = Convert.ToInt32(MyStack.Pop());
                                int Number1 = Convert.ToInt32(MyStack.Pop());
                                Number1 -= Number2;
                                MyStack.Push(Number1.ToString());
                            }
                            else if (c.ToString() == "&")
                            {
                                if (MyStack.Count < 2)
                                {
                                    Console.Write("ERROR");
                                    line = Console.ReadLine();
                                    return;
                                }
                                int Number2 = Convert.ToInt32(MyStack.Pop());
                                int Number1 = Convert.ToInt32(MyStack.Pop());
                                Number1 &= Number2;
                                MyStack.Push(Number1.ToString());
                            }
                            else if (c.ToString() == "|")
                            {
                                if (MyStack.Count < 2)
                                {
                                    Console.Write("ERROR");
                                    line = Console.ReadLine();
                                    return;
                                }
                                int Number2 = Convert.ToInt32(MyStack.Pop());
                                int Number1 = Convert.ToInt32(MyStack.Pop());
                                Number1 |= Number2;
                                MyStack.Push(Number1.ToString());
                            }
                            else if (c.ToString() == "X")
                            {
                                if (MyStack.Count < 2)
                                {
                                    Console.Write("ERROR");
                                    line = Console.ReadLine();
                                    return;
                                }
                                int Number2 = Convert.ToInt32(MyStack.Pop());
                                int Number1 = Convert.ToInt32(MyStack.Pop());
                                Number1 ^= Number2;
                                MyStack.Push(Number1.ToString());
                            }
                            else if (c.ToString() == "~")
                            {
                                int Number1 = Convert.ToInt32(MyStack.Pop());
                                Number1 = ~Number1;
                                MyStack.Push(Number1.ToString());
                            }
                        }
                    }
                }

                if (MyStack.Count > 1)
                {
                    Console.Write("ERROR");
                    line = Console.ReadLine();
                    return;
                }
                Number = Convert.ToInt32(MyStack.Pop());
                if (Number < 0)
                {
                    Console.Write("0000");
                    line = Console.ReadLine();
                    return;
                }
                if (Number > Convert.ToInt32("FFFF", 16))
                {
                    Console.Write("FFFF");
                    line = Console.ReadLine();
                    return;
                }
                string hex = IntToString(Number,
                new char[] { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
                         'A', 'B', 'C', 'D', 'E', 'F'});
                while (hex.Length < 4)
                {
                    hex = string.Format("0{0}", hex.ToString());
                }
                Console.Write(hex);
                line = Console.ReadLine();
            }
            catch (Exception e)
            {
                Console.Write("ERROR");
            }
        }
    }
