#include <cctype>
#include <iostream>

using namespace std;

int main () {
  char c; 
  bool isStr, isUppercase = false;

  cout << "nhập kí tự cần kiểm tra: " << endl;
  cin >> c;

  // kiểm tra kí tự có phải là chuỗi hay không.
  if (isalpha(c)) {
    
    isStr = true;

    // nếu là chuỗi, kiểm tra xem có phải là kí tự viết hoa hay không.
    if (isupper(c)) isUppercase = true;
  } 
   
  // in ra màn hình
  if (isStr) { 
    cout << c << " là chữ cái";
 
    if (isUppercase) {
      cout << ", viết hoa." << endl;
    }
    else { 
      cout << ", viết thường." << endl; 
    }

  } 
  else { 
    cout << "không phải là chữ cái." << endl;
  }
  return 0;
}
