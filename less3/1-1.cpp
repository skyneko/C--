#include <iostream>
using namespace std;

int N;

// tra ve giai thua cua n.
int giaiThua(int n) {
    if (n == 1)
        return 1;
    return n * giaiThua(n - 1);
}

int main() {
  cout << "Nhap so giai thua: ";
  cin >> N;
  cout << "Giai thua: " << giaiThua(N) << endl;
}
