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

        int multiply = 1;
        int negative_count = 0;
        for (int i = 0; i < n; i++)
        {

            int x;
            cin >> x;
            multiply *= x;

            if (x < 0)
                negative_count++;
        }

        if (multiply < 0)
            cout << negative_count << '\n';
        else
            cout << 0 << '\n';
    }

    return 0;
}