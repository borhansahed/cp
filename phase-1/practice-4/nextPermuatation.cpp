#include <iostream>
#include <string>
using namespace std;

bool my_next_permutation(string &s, int start, int end)
{
    if (start >= end)
    {
        return false;
    }

    int i = end - 1;

    while (i > start && s[i - 1] >= s[i])
    {
        i--;
    }

    if (i <= start)
    {
        reverse(s.begin() + start, s.begin() + end);
        return false;
    }

    int j = end - 1;
    while (s[j] <= s[i - 1])
    {
        j--;
    }

    swap(s[i - 1], s[j]);
    reverse(s.begin() + i, s.begin() + end);
    return true;
}
int main()
{

    int t;

    cin >> t;

    while (t--)
    {
        int data_set_number;
        cin >> data_set_number;
        string s;

        cin >> s;

        if (my_next_permutation(s, 0, s.length()))
        {
            cout << data_set_number << " " << s << endl;
        }
        else
        {
            cout << data_set_number << " " << "BIGGEST" << endl;
        }
    }

    return 0;
}