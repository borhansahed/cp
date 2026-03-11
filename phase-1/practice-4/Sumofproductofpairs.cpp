#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main()
{

    int n;
    cin >> n;

    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    long long sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = (sum + arr[i]) % MOD;
    }

    long long result = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = (sum - arr[i] + MOD) % MOD;
        result = ((result + (arr[i]) * sum) % MOD);
    }

    cout << result << endl;
    return 0;
}