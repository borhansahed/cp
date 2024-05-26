#include <bits/stdc++.h>
using namespace std;

void solve(int n)
{
    if (n == 0)
    {
        return;
    }

    int rem = (n % 2);
    solve(n / 2);
    cout << rem << " ";
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
        cout << "\n";
    }

    return 0;
}