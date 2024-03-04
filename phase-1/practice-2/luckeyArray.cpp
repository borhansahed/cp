#include <iostream>
using namespace std;

void solve(int arr[], int n)
{

    int minEle = arr[0];

    for (int i = 1; i < n; i++)
    {
        minEle = min(minEle, arr[i]);
    }

    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        if (minEle == arr[i])
        {

            freq++;
        }
    }

    if (freq % 2 == 0)
    {
        cout << "Unlucky"
             << "\n";
        return;
    }

    cout << "Lucky"
         << "\n";
}
int main()
{

    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    solve(arr, n);
    return 0;
}