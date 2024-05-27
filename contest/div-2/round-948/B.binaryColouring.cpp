#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int x;
        cin >> x;

        vector<int> arr;

        while (x > 0)
        {

            if (x % 2 == 0)
            {
                arr.push_back(0);
            }
            else
            {

                if ((x - 1) / 2 % 2 == 0)
                {
                    arr.push_back(1);
                    x -= 1;
                }
                else
                {
                    arr.push_back(-1);
                    x += 1;
                }
            }
            x /= 2;
        }

        cout << arr.size() << "\n";

        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}