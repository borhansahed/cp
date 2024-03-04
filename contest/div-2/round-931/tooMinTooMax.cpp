#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int maxExpressionValue(vector<int> &arr)
{
    int n = arr.size();
    int max_val = INT_MIN;

    sort(arr.begin(), arr.end()); // Sort the array to simplify calculation

    int i = arr[n - 1];
    int k = arr[n - 2];
    int l = arr[1];
    int j = arr[0];
    max_val = abs(i - j) + abs(j - k) + abs(k - l) + abs(l - i);
    return max_val;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }

        cout << maxExpressionValue(arr) << endl;
    }

    return 0;
}
