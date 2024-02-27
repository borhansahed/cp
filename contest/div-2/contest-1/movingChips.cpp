#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int ans = 0;

    while (start < end)
    {
        if (arr[start] == 0)
        {
            start++;
        }
        else if (arr[end] == 0)
        {
            end--;
        }

        if (arr[start] == 1 && arr[end] == 1)
        {
            break;
        }
    }

    while (start < end)
    {
        if (arr[start] == 0)
        {
            ans++;
            start++;
        }
        else if (arr[end] == 0)
        {
            end--;
            ans++;
        }
        else
        {
            start++;
            end--;
        }
    }
    if (start == end && arr[end] == 0)
    {
        ans++;
    }

    cout << ans << endl;
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

        // cout << "///" << endl;
        solve(arr, n);
        // cout << "///" << endl;
    }

    return 0;
}
