#include <iostream>
using namespace std;

int n;

// xuat ra phan tu Fibonacci thu n
int fib(int n) {
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    cout << "In ra phan tu fibonacci thu n."<< endl;
    cout << "Nhap n: ";
    cin >> n;

    cout << "So Fibonacci la: " << fib(n) << endl;
    return 0;
}
