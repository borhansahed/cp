#include <iostream>

using namespace std;
int main()
{

    char a[11], b[11];
    cin >> a >> b;

    int len_a = strlen(a);
    int len_b = strlen(b);

    cout << len_a << " " << len_b << "\n";
    cout << a << b << "\n";

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;
    cout << a << " " << b << "\n";
    return 0;
}