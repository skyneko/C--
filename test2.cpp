#include <iostream>
using namespace std;

int main() {

    int n,i,S;
    // nhap n
    cout << "Nhập n: ";
    cin >> n;

    // cho S = n
    S = n;

    // cho i = 1
    // kiem tra neu i <= n thi S = S+i
    // tang i them 1 gia tri
    for (i=1; i<=n; ++i) {
        S=S+i;
    }

    // in gia tri S
    cout << "gia tri cua S: " << S << endl;

    return 0;
}
