#include <iostream>
#include <math.h>
#include <cstdio>

using namespace std;

long int giaiThua(long int n) {
    long int giai_thua = 1;
    for (int i = 1; i <= n; i++)
        giai_thua *= i;
    return giai_thua;
}

int main () {

    float ex = 0;
    int x;
    int i = 0;
    float gioiHan;

    x = 5;

    while (1) {
        ex += pow(x, i) / giaiThua(i);

        i++;

        float a = pow(x, i);
        float b =  giaiThua(i);

        gioiHan = a;//fabs(a/b);

        cout << gioiHan << endl;
        if ( i > 60 || gioiHan < pow(10, -6) )
            break;
    }

    //cout << ex;

    return 0;
}
