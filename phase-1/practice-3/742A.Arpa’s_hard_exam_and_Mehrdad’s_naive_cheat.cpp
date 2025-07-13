#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << "\n";
        return 0;
    }
    int ans = 4;

    if (n % ans == 0)
    {
        ans = ans + 2;
    }
    else if (n % ans == 1)
    {
        ans = ans + 4;
    }
    else if (n % ans == 3)
    {
        ans = ans - 2;
    }

    cout << ans << "\n";
    return 0;
}