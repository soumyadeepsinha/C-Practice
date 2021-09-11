#include<iostream>
using namespace std;

void max() {
  // find the maximum value
  int a, b, c;
  cout << "Enter value for a: ";
  cin >> a;
  cout << "Enter value for b: ";
  cin >> b;
  cout <<"Enter value for c: ";
  cin >> c;

  if (a>b) {                                   // a is greater than b
    if (a>c) {                                // a is greater than b & c
      cout<< "Greater value : "<< a << endl;
    } else {
      cout << "Greater value : "<< c << endl;
    }
  } else {
    if (b>c) {                               // b is greater than c
      cout<< "Greater value : "<< b << endl;
    } else {
      cout << "Greater value : "<< c << endl;
    }
  }
}

void min() {
  // find the minimum value
  int x, y, z;
  cout << "Enter value for x: ";
  cin >> x;
  cout << "Enter value for y: ";
  cin >> y;
  cout <<"Enter value for z: ";
  cin >> z;

  if (x < y && x < z)  {
    cout << "Smallest Value: " <<x << endl;
  } else {
    if (y < z) {
      cout << "Smallest Value: " <<y << endl;
    } else {
      cout << "Smallest Value: " <<z << endl;
    }    
  } 
}

void oddeven() {
  // find the value as odd or even
  int i;
  cout << "Enter value for i: " << endl;
  cin >> i;

  if (i%2 == 0) {                             // checking if the number is divisible by 2
    cout << i << " is a Even number" << endl;
  } else {
    cout << i << " is a Odd number" << endl;
  }
}

int main()
{
  max();
  min();
  oddeven();
  return 0;
}
