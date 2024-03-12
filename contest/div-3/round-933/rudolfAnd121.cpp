#include <iostream>

using namespace std;
int main()
{

    int t;

    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n - 2; i++)
        {

            if (arr[i] < 0)
                break;

            arr[i + 1] -= (2 * arr[i]);
            arr[i + 2] -= arr[i];
            arr[i] = 0;
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] == 0)
            {

                count++;
            }
        }

        if (count == n)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    return 0;
}