#include <iostream>
using namespace std;

int main()
{

    int n, l, r, x;

    cin >> n >> l >> x >> r;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ways = 0;

    for (int mask = 0; mask < (1 << n); mask++)
    {

        int totalDifficulty = 0;
        int minimum = 1e9;
        int maximum = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {

            if ((mask >> i) & 1)
            {
                totalDifficulty += arr[i];
                minimum = min(minimum, arr[i]);
                maximum = max(maximum, arr[i]);
                count++;
            }
        }

        if (totalDifficulty >= l and totalDifficulty <= r and maximum - minimum >= x and count >= 2)
        {
            ways++;
        }
    }

    cout << ways << "\n";
    return 0;
}