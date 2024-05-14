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

        int ans = 0;
        int n = s.length();

        bool check = false;

        int i = 0;

        while (i < n)
        {

            if (s[i] == '0')
            {

                while (i < n && s[i] == '0')
                    i++;

                if (i != n)
                {
                    check = true;
                }
            }
            else
            {
                while (i < n && s[i] == '1')
                    i++;
            }

            ans++;
        }

        if (check)
        {
            ans--;
        }

        cout << ans << '\n';
    }
    return 0;
}