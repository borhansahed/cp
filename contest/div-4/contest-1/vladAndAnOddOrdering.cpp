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

        int totalSum = 0;

        for (int i = 1; i <= n; i++)
        {

            int sum = 0;
            int digit = i;
            while (digit > 0)
            {

                int last = digit % 10;
                sum += last;
                digit /= 10;
            }

            totalSum += sum;
        }

        cout << totalSum << endl;
    }

    return 0;
}