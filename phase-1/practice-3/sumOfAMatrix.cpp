#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int r, c, matrixA[N][N], matrixB[N][N];

void solve(int i, int j)
{
    if (i >= r)
    {
        return;
    }

    if (j >= c)
    {
        i++;
        j = 0;

        cout << '\n';
        solve(i, j);
    }
    else
    {
        int sum = matrixA[i][j] + matrixB[i][j];

        cout << sum << " ";
        j++;
        solve(i, j);
    }
}
int main()
{

    cin >> r >> c;

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            cin >> matrixA[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            cin >> matrixB[i][j];
        }
    }

    solve(0, 0);

    return 0;
}