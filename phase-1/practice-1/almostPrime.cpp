#include <iostream>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}
int main()
{
    /*
     * find the prime numbers
     * take a counter variable
     * if the counter exactly equal to 2 then the number is almost prime

     */

    int n;

    cin >> n;

    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;

    for (int i = 2; i <= n; i++)
    {

        int count = 0;

        for (int j = 2; j <= n; j++)
        {

            if (isPrime(j) && i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            ans++;
            count = 0;
        }
    }
    cout << ans << endl;
    return 0;
}