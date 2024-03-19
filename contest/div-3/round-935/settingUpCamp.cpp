#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c;

        cin >> a >> b >> c;

        int ans = 0;

        ans += a;
        ans += b / 3;
        b = b % 3;

        if (b > 0 && (b + c) < 3)
        {
            ans = -1;
        }
        else
        {

            ans += (b + c) / 3;

            if ((b + c) % 3 > 0)
                ans++;
        }

        cout << ans << '\n';
    }
    return 0;
}