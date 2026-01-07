#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;

    int stones[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> stones[i];
    }

    long long stones_prefix_sum[n + 1];
    stones_prefix_sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        stones_prefix_sum[i] = stones_prefix_sum[i - 1] + stones[i];
    }

    // new array to avoid modifying the original
    int sorted_stones[n + 1];
    for (int i = 1; i <= n; i++)
    {
        sorted_stones[i] = stones[i];
    }
    sort(sorted_stones + 1, sorted_stones + n + 1);

    long long sorted_stones_prefix_sum[n + 1];
    sorted_stones_prefix_sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        sorted_stones_prefix_sum[i] = sorted_stones_prefix_sum[i - 1] + sorted_stones[i];
    }

    cin >> m;

    while (m--)
    {
        int question_type, l, r;
        cin >> question_type >> l >> r;

        if (question_type == 1)
        {
            // normal order
            long long sum = stones_prefix_sum[r] - stones_prefix_sum[l - 1];
            cout << sum << endl;
        }
        else
        {

            // sorted order
            long long sum = sorted_stones_prefix_sum[r] - sorted_stones_prefix_sum[l - 1];
            cout << sum << endl;
        }
    }
    return 0;
}