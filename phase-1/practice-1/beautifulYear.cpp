#include <iostream>
using namespace std;

bool isBeautifulYear(int y)
{

    int d = y % 10;
    y /= 10;

    int d1 = y % 10;
    y /= 10;

    int d2 = y % 10;
    y /= 10;

    int d3 = y % 10;
    y /= 10;

    if (d != d1 && d != d2 && d != d3 && d1 != d2 && d1 != d3 && d2 != d3)
    {
        return true;
    }

    return false;
}
int main()
{
    int y;

    cin >> y;

    while (true)
    {
        y++;
        if (isBeautifulYear(y))
        {
            cout << y << endl;
            return 0;
        }
    }
    return 0;
}