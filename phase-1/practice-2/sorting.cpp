#include <iostream>
using namespace std;

void solve(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int max = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[max] > arr[j])
            {
                max = j;
            }
        }

        if (i != max)
        {
            int temp = arr[i];
            arr[i] = arr[max];
            arr[max] = temp;
        }
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << '\n';
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

    solve(arr, n);
    printArr(arr, n);
    return 0;
}
