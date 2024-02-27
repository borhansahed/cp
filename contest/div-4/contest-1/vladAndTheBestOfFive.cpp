#include <iostream>
using namespace std;

void count(string s)
{
    char currentChar = s[0];
    int count = 1;

    for (int i = 1; i < s.length(); i++)
    {
        if (currentChar == s[i])
        {
            count++;
        }
        else if (count <= 0)
        {
            currentChar = s[i];
            count = 1;
        }
        else if (currentChar != s[i])
        {
            count--;
        }
    }

    cout << currentChar << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        count(s);
    }

    return 0;
}