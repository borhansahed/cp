#include <iostream>
#include <string.h>
using namespace std;

const int N = 60;
char s[N], u[N];
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        cin >> s >> u;

        int s_len = strlen(s);
        int t_len = strlen(u);

        for (int i = 0; i < max(s_len, t_len); i++)
        {

            if (i < s_len)
            {
                cout << s[i];
            }

            if (i < t_len)
            {
                cout << u[i];
            }
        }

        cout << '\n';
    }
}