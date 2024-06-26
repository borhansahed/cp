#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;

    cin >> n >> sum;

    int ans = 0;

    int divideNum = sum / n;
    ans += divideNum;
    sum -= n * divideNum;

    if (sum >= 1)
    {
        ans++;
    }

    cout << ans << '\n';
    return 0;
}