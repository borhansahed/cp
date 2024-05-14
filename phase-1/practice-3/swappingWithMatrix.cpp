#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, x, y;

    cin >> n >> x >> y;

    int array[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> array[i][j];
        }
    }

    // swap x to y;

    for (int i = 0; i < n; i++)
    {
        swap(array[i][x - 1], array[i][y - 1]);
    }
    for (int i = 0; i < n; i++)
    {

        swap(array[x - 1][i], array[y - 1][i]);
    }

    // print elements

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << array[i][j] << " ";
        }

        cout << "\n";
    }
}