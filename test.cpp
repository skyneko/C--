#include <iostream>
using namespace std;

int main() {
    // nhap N
    int N,i;
    cout << "Nhap N: ";
    cin >> N;

    // tao mang A gom N phan tu
    int A[N];

    // nhap A
    for (i=0; i<N; ++i) {
        cout << "Nhap phan tu thu " << (i+1) << ": ";
        cin >> A[i];
    }

    int sum = 0;
    // kiem tra phan tu A[i] co phai la so chan
    // , neu co thi cong don vao bien sum.
    for (i=0; i<=N; ++i){
        if ((A[i] % 2) == 0)
            sum += A[i];
    }

    cout << sum;

    return 0;
}
