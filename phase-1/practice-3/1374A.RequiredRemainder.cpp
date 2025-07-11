#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int x, y, n;
        cin >> x >> y >> n;

        int ans = n % x;

        if (ans < y)
        {

            ans = (n - ans - (x - y));
        }
        else
        {

            ans = n - (ans - y);
        }
        cout << ans << endl;
    }

    return 0;
}