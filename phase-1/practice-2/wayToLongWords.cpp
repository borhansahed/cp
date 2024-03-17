#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        char ch[100];

        cin >> ch;

        int len = strlen(ch);

        if (len > 10)
        {

            cout << ch[0] << len - 2 << ch[len - 1] << endl;
        }
        else
        {
            cout << ch << endl;
        }
    }
    return 0;
}