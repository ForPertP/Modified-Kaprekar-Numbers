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

int main()
{
    string p_temp;
    getline(cin, p_temp);

    int p = stoi(ltrim(rtrim(p_temp)));

    string q_temp;
    getline(cin, q_temp);

    int q = stoi(ltrim(rtrim(q_temp)));

    kaprekarNumbers(p, q);

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
