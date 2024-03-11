#include <iostream>

using namespace std;
int main()
{

    char x[21], y[21];

    cin >> x >> y;

    int len = min(strlen(x), strlen(y));

    for (int i = 0; i < len; i++)
    {

        if (x[i] < y[i])
        {

            cout << x << '\n';
            return 0;
        }
        else if (x[i] > y[i])
        {
            cout << y << "\n";
            return 0;
        }
    }

    if (strlen(x) <= strlen(y))
    {

        cout << x << '\n';
    }
    else
    {
        cout << y << "\n";
    }

    return 0;
}