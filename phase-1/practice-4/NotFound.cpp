#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 7;
int main()
{

    char s[N];
    int freq[26] = {0};
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (freq[i] == 0)
        {
            cout << (char)('a' + i) << endl;
            return 0;
        }
    }

    cout << "None" << endl;
}