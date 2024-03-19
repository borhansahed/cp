#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        long long a, b, m;

        cin >> a >> b >> m;

        long long ans = 0;

        ans = ((a + m) / a) + ((b + m) / b);

        cout << ans << '\n';
    }
    return 0;
}