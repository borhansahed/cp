#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c;

        cin >> a >> b >> c;

        bool is_true = false;

        if (((2 * b) - c) % a == 0)
        {
            if (((2 * b) - c) / a > 0)
            {
                is_true = true;
            }
        }

        if ((c + a) % (2 * b) == 0)
        {
            is_true = true;
        }

        if ((2 * b - a) % c == 0)
        {
            if ((2 * b - a) / c > 0)
            {

                is_true = true;
            }
        }

        if (a == b && b == c)
        {
            is_true = true;
        }

        if (is_true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}