
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];
    int x;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            cout << i << endl;

            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}