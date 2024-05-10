#include <iostream>
using namespace std;

bool isExist(int a, int minA, int maxB)
{

    return a > minA and a < maxB;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int minA = min(a, b);
        int maxB = max(a, b);

        if (isExist(c, minA, maxB) and !isExist(d, minA, maxB) or isExist(d, minA, maxB) and !isExist(c, minA, maxB))
        {

            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}