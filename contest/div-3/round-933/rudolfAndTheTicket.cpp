#include <iostream>

using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        int arr_1[n];
        int arr_2[m];

        for (int i = 0; i < n; i++)
        {
            cin >> arr_1[i];
        }

        for (int i = 0; i < m; i++)
        {

            cin >> arr_2[i];
        }

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < m; j++)
            {

                int sum = arr_1[i] + arr_2[j];

                if (sum <= k)
                    count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}