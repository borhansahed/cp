#include <iostream>
using namespace std;
int main()
{

    int n;

    cin >> n;

    int arr[n];

    long long ans = 0;
    int minimumOdd = 1e9 + 1;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans += arr[i];

        if (arr[i] % 2 == 1)
        {

            minimumOdd = min(arr[i], minimumOdd);
        }
    }

    if (ans % 2 == 0)
    {

        cout << ans << "\n";
    }
    else
    {

        cout << ans - minimumOdd << '\n';
    }

    return 0;
}