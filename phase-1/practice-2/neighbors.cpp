#include <iostream>
using namespace std;
const int N = 105;
int n, m;
char arr[N][N];

bool isInside(int x, int y)
{

    if (x < n and y < m and y >= 0 and x >= 0)
    {
        return true;
    }

    return false;
}

bool isValid(int x, int y)
{

    if (!isInside(x, y))
        return true;

    if (arr[x][y] == 'x')
    {
        return true;
    }

    return false;
}
int main()
{

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int x, y;

    cin >> x >> y;

    x--;
    y--;

    if (isValid(x + 1, y + 1) and isValid(x, y - 1) and isValid(x, y + 1) and isValid(x + 1, y) and isValid(x + 1, y - 1) and isValid(x - 1, y + 1) and isValid(x - 1, y) and isValid(x - 1, y - 1))
    {

        cout << "yes"
             << "\n";
    }
    else
    {

        cout << "no" << '\n';
    }

    return 0;
}