#include <iostream>
using namespace std;

const int N = 6;
int arr[N][N];

int main()
{

    for (int i = 0; i < N; i++)
    {

        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = -10000;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            int sum = arr[i][j];
            sum += arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1];
            sum += arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1];

            ans = max(ans, sum);
        }
    }

    cout << ans << '\n';
    return 0;
}