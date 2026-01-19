#include <bits/stdc++.h>
using namespace std;

long long zero_to_x_xor(long long x)
{
    long long ans = 0;

    while (x >= 0 && x % 4 != 3)
    {
        ans ^= x;
        x--;
    }

    return ans;
}

int main()
{

    long long l, r;

    cin >> l >> r;

    long long ans = 0;

    ans = zero_to_x_xor(r) ^ (l > 0 ? zero_to_x_xor(l - 1) : 0);

    cout << ans << endl;
    return 0;
}