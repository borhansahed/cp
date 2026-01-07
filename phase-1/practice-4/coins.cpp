#include <iostream>
using namespace std;

int main()
{

    int n, sum;

    cin >> n >> sum;

    int ans = sum / n;

    if (sum % n != 0)
    {
        ans++;
    }

    cout << ans << endl;

    return 0;
}