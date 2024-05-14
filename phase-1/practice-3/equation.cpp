#include <bits/stdc++.h>
using namespace std;
int main()
{

    int x, n;

    cin >> x >> n;

    if (n <= 1 or x < 1)
    {
        cout << 0 << '\n';
        return 0;
    }

    long long sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum += pow(x, i);
    }

    cout << sum << "\n";
    return 0;
}