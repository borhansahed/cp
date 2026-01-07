#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum_of_squares = 0;
        int square_of_sum = 0;

        for (int i = 1; i <= n; i++)
        {
            sum_of_squares += (i * i);
            square_of_sum += i;
        }

        square_of_sum = square_of_sum * square_of_sum;

        cout << abs(square_of_sum - sum_of_squares) << '\n';
    }

    return 0;
}