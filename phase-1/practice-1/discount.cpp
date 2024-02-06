#include<iostream>
#include<iomanip>
using namespace std;



int main () {

  int a,b;

  cin >> a >> b;



  int total_discount = a - b;
  
  double discount = (double) total_discount / a * 100;

  cout << fixed << setprecision(6) << discount << endl;
  
    return 0;
}