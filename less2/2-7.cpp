#include <iostream>
#include <cstdlib>
using namespace std;

/**
 * mảng này sẽ chứa các kí tự bit sau khi chia [0,1,1, ...]
 * giá trị càng lớn thì có thể tính toán được số lớn hơn, mặc định max 500 kí tự bit.
 */
int arr[500];

int main() {
    int num; // số này nhập từ bàn phím.
    bool isNegative = false; // đánh dấu số có âm hay không.

    cout << "Nhap so can chuyen doi: ";
    cin >> num;

    // nếu nhập là 0, in trực tiếp giá trị ra ngoài và kết thúc. num=0 -> 0
    if (num == 0)  {
        cout << 0; return 0;
    }

    /**
     * kiểm tra giá trị nhập vào có âm hay không. Nếu âm, lấy giá trị tuyệt đối và
     * đánh dấu nó vào biến isNegative
     */
    if (num < 0) {
        num = abs(num);
        isNegative = true;
    }

    /**
     * chia lấy dư và lưu giá trị vào trong 1 mảng, chỉnh là kết quả nhưng ở dạng
     * đảo ngược.
     */

    int i = 0;

    while (1) {
        if (num < 1) break;

        arr[++i] = num % 2;
        num = num /2;
    }

    // đảo ngược giá trị va in ra màn hình.
    cout << "kết quả: ";

    if (isNegative) cout << "-"; // nếu là giá trị âm thì in thêm dấu trừ trước nó.

    for (; i>0; --i) { // lặp từ vị trí i -> 0
        cout << arr[i];
    }

    cout << endl;

    return 0;
}
