#include <iostream>
using namespace std;

int k,n;

// tra ve to hop chap k cua n phan tu.
int tinhToHop(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return tinhToHop(k - 1, n - 1) + tinhToHop(k, n - 1);
}

int main() {
  cout << "Nhap k: ";
  cin >> k;

  cout << "Nhap n: ";
  cin >> n;

  cout << k << n<< endl;

  cout << "To hop: " << tinhToHop(k,n) << endl;
}
