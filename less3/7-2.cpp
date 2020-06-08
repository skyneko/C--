#include <iostream>
using namespace std;

int n;

// xuat ra phan tu Fibonacci thu n
int fib(int n) {
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main () {

    cout << "Xuat ra n phan tu dau tien cua day Fibonacci" << endl;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Cac so Fibonacci la: ";

    if (n > 0) {
        for (int i=1; i<=n; ++i) {
            cout << fib(i) << " ";
        }
        cout << endl;
    }
    else {
        cout << "So phan tu phai lon hon 0." << endl;
    }

    return 0;
}
