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

    if (sum % 3 == 0)
    {
        cout << moves << "\n";
        return;
    }

    int sumDifference = sum % 3;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == sumDifference)
        {
            cout << 1 << "\n";
            return;
        }
    }

    for (int j = 0)
        // remove the element one by one and find the minimum moves;
        int removeEleMoves = 0;

    int j = n - 2;
    while (j >= 0)
    {
        int sum = sumOfArr(arr, j, n);

        if (sum % 3 == 0)
        {
            removeEleMoves = n - j - 1;
            break;
        }

        j--;
    }
    if (removeEleMoves == 0 && j < 0)
    {
        removeEleMoves = n;
    }

    // increase the all arr[i] value by 1 and check the minimum moves which is divided by 3;

    int plusEleMoves = 0;
    int k = 0;

    while (k < n)
    {
        arr[k]++;

        int sum = sumOfArr(arr, 0, n);

        if (sum % 3 == 0)
        {
            plusEleMoves = k + 1;
            break;
        }
        k++;
    }

    if (removeEleMoves != 0)
    {
        moves = removeEleMoves;
    }

    if (plusEleMoves != 0 && plusEleMoves < moves)
    {
        moves = plusEleMoves;
    }
    cout << moves << "\n";
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