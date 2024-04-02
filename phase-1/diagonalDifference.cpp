#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {

            cin >> matrix[i][j];
        }
    }

    int first = 0;
    int last = 0;

    int i = 0, j = 0;
    int k = 0, l = n - 1;

    while (i < n && l >= 0)
    {

        first += matrix[i++][j++];
        last += matrix[k++][l--];
    }

    cout << abs(first - last) << '\n';

    return 0;
}