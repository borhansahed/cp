#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
    long long ans = LONG_MAX;
    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {

            ans = min(ans, 1LL * (arr[i] + arr[j] + j - i));
        }
    }

    cout << ans << '\n';
}
int main()
{

    int t;
    cin >> t;

    int N;
    cin >> N;

    int arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    solve(arr, N);

    return 0;
}