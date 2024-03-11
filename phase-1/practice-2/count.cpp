#include <iostream>
using namespace std;
const int N = 1e6 + 9;

int main()

{

    char s[N];

    cin >> s;

    int len = strlen(s);

    int sum = 0;

    for (int i = 0; i < len; i++)
    {

        sum += s[i] - '0';
    }

    cout << sum << '\n';
    return 0;
}