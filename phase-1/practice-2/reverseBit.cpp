#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        unsigned int n;
        cin >> n;

        int bits[32];

        for (int i = 0; i < 32; i++)
        {
            bits[i] = (n >> i) & 1;
        }

        reverse(bits, bits + 32);
        unsigned int ans = 0;

        for (int i = 0; i < 32; i++)
        {

            if (bits[i])
            {
                ans += 1 << i;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}