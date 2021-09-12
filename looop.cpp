#include<iostream>
using namespace std;

int main() {
  int c, n, s = 0;
  cout << "ENter the NUmber for LOop : " << endl;
  cin >> n;

  for (c = 1; c <= n; c++) {
    cout << endl << "Values are : " << c << endl;
    s = s + c;
  }

  cout << "Value of Sum of : " << s << endl;

  return 0;
}
