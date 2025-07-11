#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        long long n;
        cin >> n;

        bool find_odd_divisor = false;

        while (n % 2 == 0)
        {
            n /= 2;
        }

        if (n % 2 == 1)
        {
            find_odd_divisor = true;
        }

        if (find_odd_divisor)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}