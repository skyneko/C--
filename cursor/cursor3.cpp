#include <iostream>
using namespace std;

int main () {

    // tim phan tu nho nhat trong mang
    int N, i, *c;

    cout << "Tim phan tu nho nhat trong day." << endl;
    cout << "Nhap so luong phan tu mang: ";
    cin >> N;

    int arr[N];

    // nhap du lieu
    for (i=0; i<N; ++i) {
        cout << "Nhap phan tu thu " << (i+1) << ": ";
        cin >> arr[i];
    }

    // gan vi tri bien arr vao con tro c
    c = arr;

    // tim gia tri lon nhat
    int max = *c;

    for (i=0; i<N; ++i) {
        if (max > *c) max = *c;
        c++;
    }

    // in ket qua va ket thuc
    cout << "Gia tri nho nhat la: " << max << endl;

    return 0;
}
