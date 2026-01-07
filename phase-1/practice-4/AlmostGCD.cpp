#include <bits/stdc++.h>
using namespace std;

const int MAX_VALUE = 1000, N = 100;
int main()
{

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxDivideCount = 0;
    int ans = 0;

    for (int i = 2; i <= MAX_VALUE; i++)
    {

        int current_divisor_cout = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] % i == 0)
            {
                current_divisor_cout++;
            }
        }

        if (current_divisor_cout >= maxDivideCount)
        {
            maxDivideCount = current_divisor_cout;
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
}