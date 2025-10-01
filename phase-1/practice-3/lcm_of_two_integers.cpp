#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{

    long long a, b;

    cin >> a >> b;

    int gcd_value = gcd(a, b);
    long long lcm_value = (a * b) / gcd_value;

    cout << lcm_value << '\n';
    return 0;
}