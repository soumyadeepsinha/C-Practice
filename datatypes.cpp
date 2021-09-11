#include<iostream>
using namespace std;

int main()
{
  int x;
  x = 10;
  float y;
  y = 1.0;
  char z;
  bool d;

  short int i;
  long int j;

  cout << "Size of int "<< sizeof(x) << endl;
  cout << "Size of float "<< sizeof(y) << endl;
  cout << "Size of char "<< sizeof(z) << endl;
  cout << "Size of bool "<< sizeof(d) << endl;
  cout << "Size of shortint "<< sizeof(i) << endl;
  cout << "Size of longint "<< sizeof(j) << endl;
  return 0;
}

