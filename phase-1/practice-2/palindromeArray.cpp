#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int start = 0;
    int end = n - 1;

    while (start < end)
    {
        if (a[start] != a[end])
        {

            cout << "NO" << endl;

            return 0;
        }

        start++;
        end--;
    }

    cout << "YES" << endl;

    return 0;
}