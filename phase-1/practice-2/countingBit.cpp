#include <iostream>
using namespace std;

int countingBits(int n)
{

    int count = 0;

    while (n > 0)
    {
        n = n & (n - 1);
        count++;
    }

    return count;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            count += countingBits(i);
        }

        cout << count << "\n";
    }
    return 0;
}