#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long max_sum = -1e18;
    long long sum = -1e18;
    for (int i = 0; i < n; i++)
    {
        if (sum < 0)
        {
            sum = 0;
        }

        sum += arr[i];
        max_sum = max(sum, max_sum);
    }

    cout << max_sum << "\n";
    return 0;
}