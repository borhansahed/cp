#include <iostream>
using namespace std;

int digitSum(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main()
{
    int length = 200000;
    int sum[length];

    for (int i = 1; i <= length; i++)
    {
        sum[i] = sum[i - 1] + digitSum(i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        cout << sum[n] << endl;
    }
    return 0;
}
