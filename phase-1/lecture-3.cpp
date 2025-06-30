#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

// int sum(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return n + sum(n - 1);
// }

/**
 * memoization is a technique to store the results of expensive function calls
 *
 */

int memo[1000];

int powerOfTwo(int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (memo[n] != -1)
    {
        return memo[n];
    }

    memo[n] = powerOfTwo(n - 1) + powerOfTwo(n - 1);
    return memo[n];
}

int main()
{

    // int n;
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     memo[i] = -1;
    // }

    // cout << powerOfTwo(n) << endl;

    // cout << floor(log10(1110)) + 1 << endl;

    int result = __gcd(12, 18);
    // cout << __gcd(12, 18) << endl;

    return 0;
}