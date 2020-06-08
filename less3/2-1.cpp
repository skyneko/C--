#include <iostream>
using namespace std;

int *A, arr[3];

int main () {
    A = &arr;

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    cout << *A;

    return 0;
}
