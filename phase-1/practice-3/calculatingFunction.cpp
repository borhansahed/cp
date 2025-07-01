#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    /*

    if number is even then print n/2 example:
    if n = 4 then
    -1 + 2 - 3 + 4 = 2 , 2 == n/2

    if n = 7 then
    -1 + 2 -3 + 4 -5 + 6 - 7 =  -4 , -4 == (n/2 + 1)


    */
    if (n % 2 == 0)
    {
        cout << (n / 2) << endl;
    }
    else
    {
        cout << -((n / 2) + 1) << endl;
    }
}