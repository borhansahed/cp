#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << (((a / 2) * (b / 2)) + (((b + 1) / 2) * ((a + 1) / 2))) << endl;
    }

    return 0;
}