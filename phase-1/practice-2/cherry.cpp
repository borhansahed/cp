#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }

        long long ans = 0;

        for (int i = 0; i < n - 1; i++)
        {

            ans = max(ans, (long long)arr[i] * arr[i + 1]);
        }

        cout << ans << '\n';
    }
    return 0;
}