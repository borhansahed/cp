#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int s, k, m;
        cin >> s >> k >> m;

        int total_hours = (2 * k) - s;

        if (total_hours >= m)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << m - total_hours << endl;
        }
    }
}