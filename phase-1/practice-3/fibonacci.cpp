#include <bits/stdc++.h>
using namespace std;
const int N = 30 + 7;

int fibo(int num)
{
    if (num == 1)
        return 0;
    if (num == 2)
        return 1;
    return fibo(num - 1) + fibo(num - 2);
};
int main()
{

    int n;
    cin >> n;
    ;
    cout << fibo(n) << "\n";

    return 0;
}