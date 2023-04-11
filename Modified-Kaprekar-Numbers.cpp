#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'kaprekarNumbers' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER q
 */

void kaprekarNumbers(int p, int q)
{
    bool b_result = false;

    for (long int i = p; i <= q; ++i)
    {
        long int squ = i * i;
        long int len = (long int)log10(i) + 1;
        long int po0 = (long int)pow(10, len);
        long int right = squ % po0;
        long int left = squ / po0;
        long int sum = left + right;

        if (sum == i)
        {
            cout << sum << " ";
            b_result = true;
        }
    }

    if (b_result == false)
    {
        cout << "INVALID RANGE";
    }
}
