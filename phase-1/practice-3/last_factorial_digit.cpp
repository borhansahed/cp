#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        long long factorial = 1;
        for (int i = 2; i <= n; i++)
        {
            factorial *= i;
        }

        cout << (factorial % 10) << '\n';
    }
}