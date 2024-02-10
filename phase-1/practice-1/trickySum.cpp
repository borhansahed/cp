#include<iostream>
using namespace std;

int main (){

   int t;

   cin >> t;
   while(t--){
    long long n;
    cin >> n;

    long long  sumOfn =  n *( n+1) / 2;
   long long  sumOfTwo = 0;

    for(int i = 1; i<=n; i*=2 ){
        sumOfTwo += i;
    }

    long long  ans = sumOfn - (2 * sumOfTwo);
    cout << ans << endl;

   }
    return 0;
}