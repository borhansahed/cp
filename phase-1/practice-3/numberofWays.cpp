#include <bits/stdc++.h>
using namespace std;

int ans = 0;

void solve(int s, int e, int steps)
{

    if (steps > e)
    {
        return;
    }

    if (steps == e)
    {
        ans++;
        return;
    }

    if (steps < e)
    {
        solve(s, e, steps + 1);
        solve(s, e, steps + 2);
        solve(s, e, steps + 3);
    }
}
int main()
{

    int s, e;

    cin >> s >> e;

    solve(s, e, s);

    cout << ans << endl;
    return 0;
}