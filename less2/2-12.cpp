#include <iostream>
using namespace std;

/**
 * Trả về true khi số đó thỏa mãn điều kiện trong đề bài,
 * ngược lại false.
 */
bool check(int number) {
    int arrNum[4];

    // tách các số.
    for (int i=3; i >= 0; --i) {
        arrNum[i] = number % 10;
        number = number / 10;
    }

    // kiểm tra 2 số đầu là số lẻ.
    if (arrNum[0] % 2 != 0)
        if (arrNum[1] % 2 != 0)

    // 2 số sau là số chẵn.
            if (arrNum[2] % 2 == 0)
                if (arrNum[3] %2 == 0)
                    return true;
    return false;
}

int main () {

    for (int i=1000; i< 10000; ++i)
        if (check(i))
            cout << i << endl;
}
