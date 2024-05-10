#include <iostream>
using namespace std;

bool isExist(int array[], int val, int n)
{
    for (int j = 0; j < n - 1; j++)
    {

        if (val == array[j])
        {
            return true;
        }
    }

    return false;
}
int main()
{

    int n;

    cin >> n;

    bool watched[n + 1];

    for (int i = 1; i <= n; i++)
    {
        watched[i] = false;
    }
    for (int i = 1; i <= n; i++)
    {
        int episode;

        cin >> episode;
        watched[episode] = true;
    }

    for (int i = 1; i <= n; i++)
    {

        if (!watched[i])
        {
            cout << i << '\n';
        }
    }
    return 0;
}