#include <iostream>
using namespace std;

int n;
int i = 0;
// dung de dem so phan tu da duoc in ra
int count = 0;

// xuat ra phan tu Fibonacci thu n
int fib(int n) {
    if (n == 1 || n == 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main () {

    cout << "Xuat ra phan tu le thu m cua day Fibonacci" << endl;
    cout << "Nhap n: ";
    cin >> n;


    if (n > 0) {
        while (count <= n) {
            int number = fib(++i);
            // kiem tra xem co phai so le hay khong
            if ((number % 2) != 0) {
                if (count == n) {
                    cout << number;
                }
                count +=1;
            }
        }
        cout << endl;
    }
    else {
        cout << "so phan tu phai lon hon 0." << endl;
    }

    return 0;
}
