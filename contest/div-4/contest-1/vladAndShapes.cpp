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

        int grid[n][n];

        // take input
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> grid[i][j];
            }
        }

        // check what is the grid represent : SQUARE OR TRIANGLE
        int flag = false;
        int memoCount = 0;
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {

                    count++;
                }
            }

            if (count > 0 && memoCount != 0)
            {
                memoCount = count;
            }
            if (memoCount != 0 && count == memoCount)
            {
                cout << "SQUARE" << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
        {

            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}