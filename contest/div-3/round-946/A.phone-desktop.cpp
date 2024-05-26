#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x, y;

        cin >> x >> y;

        int ans = y / 2;

        y = max(0, y - 2 * ans);
        x = max(0, x - 7 * ans);

        if (x)
        {
            ans++;
        }

        cout << ans << "\n";
    }
    return 0;
}