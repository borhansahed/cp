#include <iostream>
using namespace std;

int main()
{

    int n, k;
    cin >> n >> k;

    n = n >> k;
    n = n << k;
    cout << n << "\n";
    return 0;
}