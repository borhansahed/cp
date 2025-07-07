#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<int> arr;

        if (n % 10 != 0)
        {
            arr.push_back(n % 10);
            n -= n % 10;
        }

        int tempN = n;

        int step = 10;

        while (tempN > step)
        {
            if (tempN % step != 0)
            {

                arr.push_back((tempN % step));
                tempN -= tempN % step;
            }
            step *= 10;
        }

        if (tempN != 0)
        {

            arr.push_back(tempN);
        }

        cout
            << arr.size() << '\n';

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }

        cout << '\n';
    }

    return 0;
}