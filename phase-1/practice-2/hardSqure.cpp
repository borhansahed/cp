#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        if (i == 0 || i == n - 1)
        {

            for (int j = 0; j < n; j++)
            {
                cout << "* ";
            }
        }
        else
        {

            cout << "* ";
            for (int j = 1; j < n - 1; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }

        cout << '\n';
    }

    return 0;
}