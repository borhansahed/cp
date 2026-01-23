#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T))
        return 0;
    while (T--)
    {
        long long a, b, n;
        cin >> a >> b >> n;
        int r = n % 3;
        if (r == 0)
            cout << a << '\n';
        else if (r == 1)
            cout << b << '\n';
        else
            cout << (a ^ b) << '\n';
    }
    return 0;
}