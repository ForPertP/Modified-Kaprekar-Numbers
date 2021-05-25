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
