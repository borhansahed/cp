#include <iostream>
#include <string.h>
using namespace std;
const int N = 1000 + 5;
int main()
{

    char ch[N];
    cin >> ch;

    int len = strlen(ch);
    int start = 0;
    int end = len - 1;

    while (start < end)
    {

        if (ch[start] != ch[end])
        {
            cout << "NO" << endl;
            return 0;
        }
        start++;
        end--;
    }

    cout << "YES" << endl;
    return 0;
}