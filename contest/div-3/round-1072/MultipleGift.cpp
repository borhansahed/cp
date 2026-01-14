#include <bits/stdc++.h>
using namespace std;

int main()
{

    long long x, y;
    cin >> x >> y;

    long long count = 0;

    long long temp = x;

    while (temp <= y)
    {
        temp = temp * 2;
        count++;
    }

    cout << count << endl;
    return 0;
}