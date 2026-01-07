#include <iostream>
using namespace std;

int main()
{
    // Fast input/output

    // Disable synchronization between C and C++ standard streams
    ios::sync_with_stdio(false);

    // Untie cin from cout
    cin.tie(NULL);

    int n, k;

    cin >> n >> k;

    int ans = 0;
    for (int i = 0; i < n; i++)
    {

        int x;
        cin >> x;

        if (x % k == 0)
        {

            ans++;
        }
    }

    cout << ans << endl;
}