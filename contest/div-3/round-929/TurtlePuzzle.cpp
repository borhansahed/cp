#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
    int plusIndex = 0;
    int minusIndex = n - 1;

    // 1st step rearrange the array plus int to minus int;
    int newArr[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            newArr[minusIndex--] = arr[i];
        }
        else
        {
            newArr[plusIndex++] = arr[i];
        }
    }

    // choose the negative pair and assign the - before arr[i];

    for (int j = minusIndex + 1; j < n; j++)
    {
        newArr[j] = -(newArr[j]);
    }

    int sum = 0;

    // count the sum of array;

    for (int i = 0; i < n; i++)
    {
        sum += newArr[i];
    }

    cout << sum << "\n";
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

        // taking array input
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        solve(arr, n);
    }

    return 0;
}