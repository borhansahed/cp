#include <iostream>
#include <string.h>

using namespace std;

const int N = 1e5 + 9;
int main()
{

    char ch[N];

    cin >> ch;

    int len = strlen(ch);

    for (int i = 0; i < len; i++)
    {

        char c = ch[i];

        if (c == ',')
        {
            ch[i] = ' ';
        }
        else if ((int)c >= 65 && (int)c <= 96)
        {
            ch[i] = c + 32;
        }
        else
        {
            ch[i] = c - 32;
        }
    }

      cout << ch << endl;

    return 0;
}