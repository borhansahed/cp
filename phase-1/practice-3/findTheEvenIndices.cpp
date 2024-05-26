#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n)
{

    if (n < 0)
    {

        return;
    }

    if (n % 2 == 0)
    {
        cout << arr[n] << " ";
    }

    solve(arr, n - 1);
}
int main()
{

    int n;

    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solve(arr, n - 1);
    cout << "\n";
    return 0;
}