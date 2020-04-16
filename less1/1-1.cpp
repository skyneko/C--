#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
using namespace std;

int main () {
    // điểm A
    float x,y,z;

    // mặt phẳng P
    float a,b,c,d;

    // khoảng cách
    float D;

    cout << "Mat phang (P) ax + by + cz +d = 0" << endl;
    cout << "Nhap a: ";
    cin >> a;

    cout << "Nhap b: ";
    cin >> b;

    cout << "Nhap c: ";
    cin >> c;

    cout << "Nhap d: ";
    cin >>d;

    cout << "Diem A(x,y,z)" << endl;
    cout << "Nhap x: ";
    cin >>x;

    cout << "Nhap y: ";
    cin >>y;

    cout << "Nhap z: ";
    cin >>z;


    D = fabs(a*x + b*y + c*z + d) / sqrt(a*a + b*b + c*c);

    cout << "Ket qua: " << std::fixed << setprecision(3) << D;

    return 0;
}
