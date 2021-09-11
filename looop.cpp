#include<iostream>
using namespace std;

int main() {
  int i, j, k;
  cout << "ENter the NUmber for LOop : " << endl;
  cin >> j;
  cout << "ENter the VAlue for K : " << endl;
  cin >> k;

  for (i = 1; i < j; i++) {
    cout << "HEllo WOrld of C++" << endl;
    if (i == k && j == k) {
      break;
    } else {
      continue;
    }
  }
  
  return 0;
}
