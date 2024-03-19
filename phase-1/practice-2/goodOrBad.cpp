#include <iostream>
#include <string.h>
using namespace std;

const int N = 1e5 + 9;

void solve(char ch[], int len)
{
    bool is_good = false;
    for (int i = 0; i < len; i++)
    {

        if (i + 2 < len and ch[i] == '1' and ch[i + 1] == '0' and ch[i + 2] == '1')
        {
            is_good = true;
        }
        if (i + 2 < len and ch[i] == '0' and ch[i + 1] == '1' and ch[i + 2] == '0')
        {
            is_good = true;
        }
    }

    if (is_good)
    {
        cout << "Good" << endl;
    }
    else
    {
        cout << "Bad" << endl;
    }
    return;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        char ch[N];
        cin >> ch;

        int len = strlen(ch);

        solve(ch, len);
    }
    return 0;
}