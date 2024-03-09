#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int first = 0;
    int second = 1;
    int ans = 0;
    if (n == 1)
    {
        cout << first << '\n';
        return 0;
    }
    if (n == 2)
    {
        cout << second << '\n';
        return 0;
    }
    for (int i = 3; i <= n; i++)
    {
        ans = first + second;
        first = second;
        second = ans;
    }

    cout << ans << "\n";
    return 0;
}