#include <iostream>
#include <string.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        int i = 0, j = 0, ans = 0;
        while (i < n and j < m)
        {
            if (a[i] == b[j])
            {

                ans++;
                i++;
                j++;
                continue;
            }
            j++;
        }

        cout << ans << "\n";
    }
    return 0;
}