#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9;
int D[N];
int main()
{

    for (int i = 1; i < N; i++)
    {
        for (int j = i; j < N; j += i)
        {
            D[j]++;
        }
    }

    int n;
    cin >> n;

    long long sum_of_divisor = 0;

    for (int i = 1; i <= n; i++)
    {
        sum_of_divisor += 1LL * i * D[i];
    }

    cout << sum_of_divisor << "\n";

    return 0;
}