#include <iostream>
using namespace std;

int main()
{

    int n, q;

    cin >> n;

    // prefix sum array
    int prefixSum[n + 1];
    prefixSum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        prefixSum[i] = prefixSum[i - 1] + x;
    }

    cin >> q;
    // answer the queries in O(1) time
    while (q--)
    {
        int l, r;
        cin >> l >> r;

        cout << prefixSum[r + 1] - prefixSum[l] << endl;
    }

    return 0;
}