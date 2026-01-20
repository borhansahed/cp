#include <bits/stdc++.h>
using namespace std;
const int N = 10;
int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int main()
{

    int n;
    cin >> n;

    do
    {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i];
        }
        cout << endl;

    } while (next_permutation(arr, arr + n));

    return 0;
}