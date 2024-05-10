#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        unsigned int n;
        cin >> n;

        // 1st method with add the power of 2 when the bit is set;

        // unsigned int ans = 0;

        // for (int i = 0; i < 32; i++)
        // {

        //     if (!((n >> i) & 1))
        //     {
        //         ans += 1 << i;
        //     }
        // }
        cout << (~n) << "\n";
    }
    return 0;
}