#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int l, r;

        cin >> l >> r;

        int x = -1, y = -1;

        if ((l * 2) <= r)
        {

            x = l;
            y = l * 2;
        }
        cout << x << " " << y << endl;
    }
}