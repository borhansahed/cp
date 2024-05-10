#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int nums[n];
        vector<int> counter(101, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
            counter[nums[i]]++;
        }

        int ans = 0;

        for (int i = 0; i < 101; i++)
        {
            if (counter[i] >= 3)
            {
                ans += counter[i] / 3;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}