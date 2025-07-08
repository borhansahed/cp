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

        // O(n)
        // int moves = 0;

        // if (a != b)
        // {

        //     int x = a;

        //     bool is_add = a > b ? false : true;
        //     int num = 10;

        //     while (x != b)
        //     {
        //         int difference = abs(x - b);

        //         if (is_add)
        //         {
        //             x += (difference / num) * num;
        //         }
        //         else
        //         {
        //             x -= (difference / num) * num;
        //         }
        //         num--;
        //         moves += (difference / num);
        //     }
        // }

        int moves = 0;

        int difference = abs(a - b);

        if (difference % 10 == 0)
        {
            moves = (difference / 10);
        }
        else
        {
            moves = (difference / 10) + 1;
        }

        cout << moves << endl;
    }
}