#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int N, i;
    float S = 0;

    cout << "Nhập N: ";
    cin >> N;

    for (i=1; i<=N; ++i) {
        S += i*i; // i mu 2
    }

    S = sqrt(S); // lay can bac 2 cua S

    cout << S;

    return 0;
}
