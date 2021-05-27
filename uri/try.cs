using System;
using System.Globalization;

namespace ConsoleApp1
{
    class Program {
        static void Main(string[] args)
        {
            double [,]m=new double [12,12];
            double sum =0.0;
            char n;
            int a = 1;
            n = Console.ReadLine()[0];




            for (int i = 0; i < 12; i++)
            {
                for (int j = 0; j < 12; j++)
                {
                    //m[i, j] = 1.5;
                    m[i, j] = Convert.ToDouble(Console.ReadLine());
                }
            }

            for (int i = 0; i < 12; i++)
            {
                for (int j = 0; j < i; j++)
                {
                    sum += m[i,j];
                }
                a++;
            }



            if (n == 'S')
            {
                    Console.WriteLine(string.Format("{0,0:f1}",sum));
            }
            else if (n == 'M')
            {
                    Console.WriteLine(string.Format("{0,0:f1}",sum/66));
            }
        
        }

    }
}