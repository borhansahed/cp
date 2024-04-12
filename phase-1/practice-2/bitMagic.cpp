#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, k;
        cin >> n >> k;

        unsigned int ans = n | (1 << k);
        cout << ans << "\n";
    }
    return 0;
}