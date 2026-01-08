#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main()
{

    int k;
    cin >> k;

    long long sum = 0;

    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {

            for (int l = 1; l <= k; l++)
            {
                sum += std::__gcd(std::__gcd(i, j), l);
            }
        }
    }

    cout << sum << endl;
    return 0;
}