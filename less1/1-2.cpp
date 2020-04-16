#include <iostream>
using namespace std;    

int main()
{
  float num1, num2, num3;
  float average, sum;
  
  cout << "nhap num1: ";
  cin >> num1;
  cout << "nhap num2: ";
  cin >> num2;
  cout << "nhap num2: ";
  cin >> num3;
  
  sum = num1 + num2 + num3; // tinh tong
  average = sum / 3; // trung binh = tong / 3

  cout << "Average: " << average << "\n";
  return 0;
}
