#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int N = 1000 + 7;

int main()
{
    int t;
    cin >> t;

    vector<int> fact(N);
    fact[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        fact[i] = (1LL * fact[i - 1] * i) % MOD;
    }

    while (t--)
    {
        int n;
        cin >> n;
        cout << fact[n] << endl;
    }

    return 0;
}