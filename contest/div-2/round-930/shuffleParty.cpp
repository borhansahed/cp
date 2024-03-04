#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int rst = 1;
        while (rst * 2 <= n)
        {
            rst <<= 1;
        }
        cout << rst << "\n";
    }

    return 0;
}
