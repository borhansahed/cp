#include <iostream>
using namespace std;

int sumOfDigits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int last = n % 10;
        sum += last;
        n /= 10;
    }
    return sum;
}
int main()
{

    char s[100005];
    cin >> s;
    int ans = 0;
    int digitSum = 0;

    int len = strlen(s);

    if (len == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < len; i++)
    {
        digitSum += s[i] - '0';
    }

    ans++;
    int n = digitSum;

    while (n > 9)
    {

        n = sumOfDigits(n);
        ans++;
    }

    cout << ans << endl;

    return 0;
}