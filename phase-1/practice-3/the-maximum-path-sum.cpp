#include <bits/stdc++.h>
using namespace std;

const int N = 12;
// Declare a 2D array with n rows and m columns
int arr[N][N];
int max_number = INT_MIN;
void solve(int n, int m, int nIndex, int mIndex, int total_sum)
{
    if (nIndex == (n - 1) && mIndex == (m - 1))
    {
        max_number = max(max_number, total_sum);
        return;
    }

    if (nIndex + 1 < n)

    {
        solve(n, m, nIndex + 1, mIndex, total_sum + arr[nIndex + 1][mIndex]);
    }

    if (mIndex + 1 < m)
    {
        solve(n, m, nIndex, mIndex + 1, total_sum + arr[nIndex][mIndex + 1]);
    }
}

int main()
{

    int n, m;

    cin >> n >> m;

    // Input the elements of the 2D array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    solve(n, m, 0, 0, arr[0][0]);

    cout << max_number << endl;

    return 0;
}