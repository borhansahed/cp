#include <iostream>
using namespace std;

bool isOdd(int n)
{
    return n % 2 == 1;
}

bool isPalindrome(int n)
{
    int bits[32];

    int i = 0;
    while (n > 0)
    {
        bits[i] = n & 1;
        i++;
        n = n >> 1;
    }
    int start = 0, end = i - 1;

    while (start < end)
    {

        if (bits[start] != bits[end])
        {
            return false;
        }
        start++;
        end--;
    }

    return true;
}
int main()
{

    int n;
    cin >> n;

    if (isOdd(n) and isPalindrome(n))
    {

        cout << "YES"
             << "\n";
    }
    else
    {
        cout << "NO"
             << "\n";
    }
    return 0;
}