#include <iostream>
#include <string.h>
using namespace std;

const int N = 1e7 + 9;
char ch[N];
int main()
{
    cin >> ch;

    int len = strlen(ch);

    int count[26] = {0};

    for (int i = 0; i < len; i++)
    {

        int index = (int)ch[i] - '0' - 49;
        count[index]++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] != 0)
        {
            cout << (char)(49 + i + '0') << " : " << count[i] << '\n';
        }
    }
    return 0;
}