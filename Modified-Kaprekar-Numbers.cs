using System.CodeDom.Compiler;
using System.Collections.Generic;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics.CodeAnalysis;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Reflection;
using System.Runtime.Serialization;
using System.Text.RegularExpressions;
using System.Text;
using System;

class Result
{

    /*
     * Complete the 'kaprekarNumbers' function below.
     *
     * The function accepts following parameters:
     *  1. INTEGER p
     *  2. INTEGER q
     */

    public static void kaprekarNumbers(int p, int q)
    {
        bool b_result = false;

        for (long i = p; i <= q; ++i)
        {
            long squ = i * i;
            int len = (int)Math.Log10(i) + 1;
            long po0 = (long)Math.Pow(10, len);
            long right = squ % po0;
            long left = squ / po0;
            long sum = left + right;

            if (sum == i)
            {
                Console.Write(sum + " ");
                b_result = true;
            }
        }

        if (b_result == false)
        {
            Console.Write("INVALID RANGE");
        }
    }

}

class Solution
{
    public static void Main(string[] args)
    {
        int p = Convert.ToInt32(Console.ReadLine().Trim());

        int q = Convert.ToInt32(Console.ReadLine().Trim());

        Result.kaprekarNumbers(p, q);
    }
}
