#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a1, b1, c1;

    while (true)
    {

        cin >> a1 >> b1 >> c1;

        if (a1 == 0 && b1 == 0 && c1 == 0)
        {
            break;
        }

        if (b1 - a1 == c1 - b1)
        {
            cout << "AP " << c1 + (c1 - b1) << '\n';
        }
        else
        {
            cout << "GP " << c1 * (c1 / b1) << '\n';
        }
    }
}