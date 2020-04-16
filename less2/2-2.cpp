#include <iostream>
using namespace std;

int main () {
 
  float maxNum, a, b, c, d;

  // input 
  cout << "nhập a: ";
  cin >> a;
  
  cout << "nhập b: ";
  cin >> b;
  
  cout << "nhập c: ";
  cin >> c;
  
  cout << "nhập d: ";
  cin >> d; 
  

  if (a > b && a > c && a > d)
    cout << "số lớn nhất là a: " << a << endl;
  
  if (b > a && b > c && b > d)
    cout << "số lớn nhất là b: " << b << endl;

  if (c > a && c > b && c > d)
    cout << "số lớn nhất là c: " << c << endl;

  if (d > a && d > b && d > c)
    cout << "số lớn nhất là d: " << d << endl;

  return 0;
}
