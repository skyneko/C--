#include <iostream>
using namespace std;

int i;

bool kiemTraSoHoanChinh(int number) {
    if (number == 0) return true;

    int sum = 0;

    for (i=1; i < number; ++i) {
        if (number % i == 0) {
            //cout << i;
            sum += i;
        }
    }

    if (sum == number) return true;

    return false;
}

int main () {

    int n;

    cout << "Nhap N: ";
    cin >> n;

    cout << "Cac so hoan chinh trong pham vi nho hon N la: ";
    for (i=0; i < n; ++i) {
        if (kiemTraSoHoanChinh(i))
            cout << i << " ";
    }

    return 0;
}
