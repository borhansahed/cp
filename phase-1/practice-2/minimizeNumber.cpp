#include <iostream>
using namespace std;

bool isEvenArr(int arr[], int n)
{

    bool isEven = true;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 != 0)
        {
            isEven = false;
            break;
        }
    }

    return isEven;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    while (true)
    {

        if (isEvenArr(arr, n))
        {
            for (int i = 0; i < n; i++)
            {
                arr[i] = arr[i] / 2;
            }
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count << "\n";
    return 0;
}