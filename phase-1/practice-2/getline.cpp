#include <iostream>
using namespace std;

int main()
{

    string s;
    getline(cin, s);

    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '\\')
        {
            ans += s[i];
        }
        else
        {
            break;
        }
    }
    cout << ans << '\n';
    return 0;
}