#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int arr[n + 1];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool found = false;

        int andValue = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            andValue &= arr[i];
        }

        if (andValue < k)
        {
            cout << "YES" << '\n';
            continue;
        }

        cout << "NO" << '\n';
    }
    return 0;
}