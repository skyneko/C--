#include <iostream>
using namespace std;

int main() {
    int dayStart = 3; // cho chủ nhật 0, thứ 2 là 1 ... , tháng này ngày 1 là thứ 4 nên giá trị cho là 3.
    int date, day;

    /**
     * chia ngày hiện tại cho 7 để lấy số dư, cộng cho 'thứ' bắt đầu của tháng để ra 'thứ hiện tại'
     */

    cout << "Nhập vào ngày: ";
    cin >> date;

    day = date % 7 + dayStart;

    switch (day) {
        //case 2: cout << "thứ hai"; break;
        case 3: cout << "thứ ba"; break;
        case 4: cout << "thứ tư"; break;
        case 5: cout << "thứ năm"; break;
        case 6: cout << "thứ sáu"; break;
        case 7: cout << "thứ bảy"; break;
        case 8: cout << "chủ nhật"; break;
        case 9: cout << "thứ hai"; break;
    }

    return 0;
}
