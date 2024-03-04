#include <iostream>
using namespace std;
int sumOfArr(int arr[], int start, int end)
{
    int sum = 0;
    for (int i = start; i < end; i++)
    {
        sum += arr[i];
    }

    return sum;
}
void solve(int arr[], int n)
{

    int moves = 0;

    int sum = sumOfArr(arr, 0, n);

    int reminder = sum % 3;

    if (reminder == 0)
    {
        cout << moves << "\n";
        return;
    }

    else if (reminder == 1)
    {
        for (int i = 0; i < n; i++)
        {
            if ((sum - arr[i]) % 3 == 0)
            {
                cout << 1 << '\n';
                return;
            }
        }

        cout << 2 << '\n';
        return;
    }

    cout << 1 << "\n";
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        solve(arr, n);
    }
    return 0;
}