#include <iostream>
using namespace std;

int main () {

    // dieu kien: gia tri nhap vao be hon 20.

    int N, i, *c;
    int S = 0;

    cout << "Tinh tich cac phan tu be hon 20."<< endl;
    cout << "Nhập số phần tử: ";
    cin >> N;

    int arr[N];

    for (i=0; i < N; ++i) {
        cout << "Nhập phần tử thứ " << (i+1) << ": ";
        cin >> arr[i];
    }

    // gan vi trua mang cho bien con tro c
    c = arr;

    for (i=0; i< N; ++i) {
        if (*c < 20) S += *c;
        c++; // di chuyen con tro den vi tri tiep theo
    }

    // in ra tich cac phan tu thoa man dieu kien
    cout << "Tich cac phan tu be hon 20 la: " << S << endl;

    return 0;
}
