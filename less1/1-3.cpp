#include<iostream>
#include <string>
using namespace std;

/** 
 * viết chương trình nhập vào tên, giới tính và
 * tuổi của một người. Xuất ra màn hình tên, 
 * giới tính và năm sinh của người đó.
 */

int tuoi;
string ten, gioiTinh;

int main () {
    
  cout<<"Nhap ten cua ban: "<<endl;
  cin >> ten;

  cout<<"Nhap gioi tinh: "<<endl;
  cin >> gioiTinh;

  cout<<"Nhap tuoi:"<<endl;
  cin >> tuoi;

  cout<< "Ban ten "<< ten 
    << ", gioi tinh " << gioiTinh 
    << ", sinh nam " << (2020-tuoi) <<endl;

  return 0;
}
