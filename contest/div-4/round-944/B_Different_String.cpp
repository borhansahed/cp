#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        string s;
        cin >> s;
        string r = "";
        r = s;

        for (int i = 0; i < r.length() - 1; i++)
        {
            swap(r[i], r[i + 1]);
        }

        if (s != r)
        {
            cout << "YES" << '\n';
            cout << r << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}