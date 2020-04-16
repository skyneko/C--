#include<iostream>
using namespace std;

int main () {

    int n[50], N, i, j;

    // nhap lieu
    do {
        cout << "Nhap so luong phan tu (0 > N < 51): ";
        cin >> N;
    } while (N < 1 || N > 50);

    for (i=0; i<N; ++i) {
        cout << "Nhap phan tu thu " << (i+1) << ": ";
        cin >> n[i];
    }

    //A. xac dinh phan tu la so chan & lon hon 30.
    cout << "So phan tu la so chan va lon hon 30 trong mang la: ";
    for (i=0; i< N; ++i) {
        if ( (n[i] %2) == 0 && n[i] > 30)
            cout << n[i] << " ";
    }
    cout << endl;

    //B. tim gia tri nho nhat trong mang va so lan xuat hien cua no.
    cout << "Gia tri nho nhat trong mang la: ";

    // -- tim gia tri nho nhat
    int arrMin = n[0];
    for (i=0; i<N; ++i) {
        if (n[i] < arrMin) arrMin = n[i];
    }
    cout << arrMin;

    // -- tinh so lan xuat hien
    int arrMinCount = 0;

    for (i=0; i<N; ++i) {
        if (n[i] == arrMin) arrMinCount += 1;
    }
    cout << ", co so lan xuat hien la: "<< arrMinCount << endl;

    //C. Sap xep mang tang dan.
    int s;
    for (i=0; i<N-1; ++i)
        for (j = i +1; j<N; ++j)
            if (n[i] > n[j]) {
                s = n[i];
                n[i] = n[j];
                n[j] = s;
            }

    cout << "Mang sap xep tang dan: ";
    for (i=0; i<N; ++i)
        cout << n[i]<< " ";

    cout <<endl;

    //D. Xoa tat ca cac phan tu co gia tri bang x o trong mang.
    int del;

    cout << "Nhap so can xoa trong day: ";
    cin >> del;

    int count = 0; // so lan xuat hien cua so can xoa
    for (i=0; i<N; ++i)
        if (n[i] == del) {
            if (i != N-1){
                for (j=i; j<N-1; ++j)
                    n[j] = n[j+1];
                i -=1;
            }
            count++;
        }

    // giam do dai N theo so lan xoa.
    N -= count;

    cout << "Mang sau khi xoa: ";
    for (i=0; i<N; ++i) {
        cout << n[i] << " ";
    }
    cout <<endl;

    //E. Chen vao mang phan tu y sao cho mang van tang dan.
    int y;

    cout << "Nhap phan tu muon chen vao: ";
    cin >> y;

    if (y >= n[N-1])
        n[N] = y;
    else {
        for (i=0; i<N; ++i) {
            if (n[i] > y) {
                for (j=N+1; j>=i; --j) {
                    if (j == i)
                        n[j] = y;
                    else
                        n[j] = n[j-1];
                }
                break;
            }
        }
    }
    N += 1;

    cout << "Mang sau khi chen phan tu: ";
    for (i=0; i<N; ++i)
        cout << n[i] << " ";

    cout << endl;
    return 0;
}
