#include <iostream>
using namespace std;

int main () {
  int num;

  cout << "nhập một số từ 0-9: ";
  cin >> num;

  switch (num) {
    case 0:
      cout << "không"<<endl; break;
    case 1:
      cout << "một"<<endl; break;
    case 2:
      cout << "hai"<<endl; break;
    case 3:
      cout << "ba"<<endl; break;
    case 4:
      cout << "bốn"<<endl; break;
    case 5:
      cout << "năm"<<endl; break;    
    case 6:
      cout << "sáu"<<endl; break;
    case 7:
      cout << "bảy"<<endl; break;    
    case 8:
      cout << "tám"<<endl; break;
    case 9:
      cout << "chín"<<endl; break;
  
    default:
      cout << "số không nằm trong khoảng 0-9"<<endl;
  }

  return 0;
}
