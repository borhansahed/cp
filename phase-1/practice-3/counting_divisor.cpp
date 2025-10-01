#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
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

    int t;
    cin >> t;

    while (t--)
    {
        int n;

        cin >> n;

        cout << D[n] << "\n";
    }

    return 0;
}