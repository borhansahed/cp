#include <iostream>
using namespace std;

int main()
{

    int a;
    cin >> a;

    int setBitCount = 0;

    while (a > 0)
    {
        a = a & (a - 1);
        setBitCount++;
    }

    // method 1 - optimal;

    cout << ((1 << setBitCount) - 1) << "\n";

    // T.C -> O(1)

    //  method 2 brute force;

    // int n = 1 << setBitCount;

    // for (int i = 1 << setBitCount - 1; i < n; i++)
    // {
    //     int count = 0;
    //     int temp = i;
    //     while (temp > 0)
    //     {
    //         temp = temp & (temp - 1);
    //         count++;
    //     }

    //     if (count == setBitCount)
    //     {
    //         cout << i << "\n";
    //         break;
    //     }
    // }

    // T.C -> O(i) * O(count)

    return 0;
}