#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    char s[n];
    cin >> s;

    int len = strlen(s);

    char prev = s[0];
    int ans = 0;

    for (int i = 1; i < len; i++)
    {

        if (prev == s[i])
        {
            ans++;
        }

        prev = s[i];
    }

    cout << ans << '\n';

    return 0;
}