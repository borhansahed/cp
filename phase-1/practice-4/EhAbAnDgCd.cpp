#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int x;
        cin >> x;

        // T.C -> O(n^2)
        // for (int i = 1; i <= x; i++)
        // {

        //     bool found = false;
        //     for (int j = i; j <= x; j++)
        //     {

        //         int gcd = __gcd(i, j);
        //         int lcm = (i * j) / gcd;

        //         if (gcd + lcm == x)
        //         {
        //             cout << i << " " << j << endl;
        //             found = true;
        //             break;
        //         }
        //     }

        //     if (found)
        //     {
        //         break;
        //     }
        // T.C -> O(1)

        cout << 1 << " " << x - 1 << endl;
    }
    return 0;
}