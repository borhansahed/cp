#include <bits/stdc++.h>
using namespace std;

const int N = 200 + 7;

void solve(char ch[], int len, int ans)
{

    if (len < 0)
    {
        cout << ans << "\n";
        return;
    }

    ch[len] = tolower(ch[len]);

    if (ch[len] == 'a' or ch[len] == 'e' or ch[len] == 'o' or ch[len] == 'i' or ch[len] == 'u')
    {
        ans++;
    }

    solve(ch, len - 1, ans);
}
int main()
{

    char ch[N];

    cin.get(ch, N);
    int len = strlen(ch);

    solve(ch, len, 0);

    return 0;
}