#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;

    cin >> n >> k;

    long long odd_number_length = n % 2 == 0 ? n / 2 : n / 2 + 1;
    long long even_number_length = n % 2 == 0 ? n / 2 : n / 2;

    if (k <= odd_number_length)
    {
        cout << 1 + (2 * (k - 1)) << "\n";
    }
    else
    {
        cout << 2 + (2 * ((k - odd_number_length) - 1)) << "\n";
    }

    return 0;
}