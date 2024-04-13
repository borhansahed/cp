#include <iostream>
#include <string.h>
using namespace std;
const int N = 1e5 + 9;
char s[N];
int main()
{
    cin >> s;

    int len = strlen(s);
    int stop = -1;

    for (int i = 0; i < len; i++)
    {

        if (s[i] == '0')
        {
            stop = i;
            break;
        }
    }
    if (stop == -1)
    {

        for (int i = 0; i < len - 1; i++)
        {

            cout << s[i];
        }
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (stop != i)
            {
                cout << s[i];
            }
        }
    }

    cout << '\n';
    return 0;
}