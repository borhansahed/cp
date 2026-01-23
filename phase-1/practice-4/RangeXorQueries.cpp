#include <iostream>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    int arr[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {
        arr[i] ^= arr[i - 1];
    }

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        int result = 0;
        result = arr[r] ^ arr[l - 1];
        cout << result << '\n';
    }
}