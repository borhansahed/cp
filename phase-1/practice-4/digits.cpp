#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n, b;

    cin >> n >> b;

    int digits = 0;

    while (n > 0)
    {
        int last_digit = n % b;
        digits++;
        n = n / b;
    }

    cout << digits << endl;
    return 0;
}