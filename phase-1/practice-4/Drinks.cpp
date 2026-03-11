#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int sumOfP = 0;

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        sumOfP += abs(p);
    }

    double ans = sumOfP / (double)n;

    cout << ans << '\n';

    return 0;
}