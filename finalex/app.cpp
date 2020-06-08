#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstring>
#include <cstdlib>

using namespace std;

// data file path
char studentFilePath[15] = "./sinhvien.txt";

// Struct

struct Student
{
  int id;
  string name;
  bool gender;
  int yearOfBirth; 
  string className;
  // transcript
  float math;
  float english;
  float physical;
  

  // Student (int id, string name, bool gender, int yearOfBirth, string className) {
  //   this -> id = id;
  //   this -> name = name;
  //   this -> gender = gender;
  //   this -> yearOfBirth = yearOfBirth;
  //   this -> className = className;
  // }
};

// commons
string intToString(int n) 
{
    ostringstream ss;
    ss << n;
    return ss.str();
}

string floatToString(float n) 
{
    ostringstream ss;
    ss << n;
    return ss.str();
}

int stringToInt(string str) 
{
   int num;
   istringstream ss(str);
   ss >> num;

   return num;
}

float stringToFloat(string str) 
{
   return ::strtof(str.c_str(), 0);
}

string trim(std::string& str)
{
    str.erase(0, str.find_first_not_of(' '));       // xoa khoang trang o dau
    str.erase(str.find_last_not_of(' ')+1);         // xoa khoang trang o cuoi
    return str;
}

string formatTableStringData(string str, int n) 
{
  if (str.length() <= n) {
    int l = n - str.length();
    for (int i=0; i < l; i++) {
      str += " ";
    }
  } else {
    int l = str.length() - n;
    for (int i=0; i < l; i++) {
      str = str.substr(0, str.size()-1);
    }
  }

  return str;
}

Student stringToStudent (string data) 
{

  stringstream ss(data);
  string segment;
  
  string arr[100];
  int n = 0;
  while(getline(ss, segment, '|'))
  {
    arr[n++] = segment;
  }

  Student result = { stringToInt(arr[0]), arr[3], (arr[2] == "male") , stringToInt(arr[4]), arr[1], stringToFloat(arr[5]), stringToFloat(arr[6]), stringToFloat(arr[7]) };
  return result;
}

void clearConsole() {
  cout << "\033c";
}

/**
 * Nhap mot sinh vien vao co so du lieu
*/
void addStudent(Student student) 
{
  fstream file;
  string writeData;

  file.open(studentFilePath, ios::app);

  string gender = (student.gender) ? "male" : "female";

  writeData += intToString(student.id) + "|" + student.className + "|" + gender + "|" + student.name + "|" + intToString(student.yearOfBirth) + "|" + floatToString(student.math) + "|" + floatToString(student.english) + "|" + floatToString(student.physical) + "\n";
  file << writeData;

  file.close();
}

void deleteStudentByID(int targetID) {
  fstream readfile;
  fstream writefile;
  string newData;
  string line;
  readfile.open(studentFilePath, ios::in);

  while(!readfile.eof()) {
    getline(readfile, line);

    if (line.length() > 0) {
      Student student = stringToStudent(line);

      if (student.id != targetID) {
        string gender = (student.gender) ? "male" : "female";
        newData += intToString(student.id) + "|" + student.className + "|" + gender + "|" + student.name + "|" + intToString(student.yearOfBirth) + "|" + floatToString(student.math) + "|" + floatToString(student.english) + "|" + floatToString(student.physical) + "\n";
      }
    }
  }

  writefile.open(studentFilePath, ios::out);
  writefile << newData;
  
  readfile.close();
  writefile.close();
}

void deleteStudentByName(string targetName) {
  fstream readfile;
  fstream writefile;
  string newData;
  string line;
  readfile.open(studentFilePath, ios::in);

  while(!readfile.eof()) {
    getline(readfile, line);

    if (line.length() > 0) {
      Student student = stringToStudent(line);

      if (student.name != targetName) {
        string gender = (student.gender) ? "male" : "female";
        newData += intToString(student.id) + "|" + student.className + "|" + gender + "|" + student.name + "|" + intToString(student.yearOfBirth) + "|" + floatToString(student.math) + "|" + floatToString(student.english) + "|" + floatToString(student.physical) + "\n";
      }
    }
  }

  writefile.open(studentFilePath, ios::out);
  writefile << newData;
  
  readfile.close();
  writefile.close();
}

// Views
void createStudentTableView(Student studentArr[], int arrLength) 
{
  cout << "--------- o -----------" << endl;
  cout << " ID | Name                | Gender | yearOfBirth  | ClassName | Math | English | Physical " << endl;
  for (int i = 0; i < arrLength; i++)
  {
    cout << formatTableStringData(intToString(studentArr[i].id), 4) + "|";
    cout << formatTableStringData(studentArr[i].name, 21) + "|";
    cout << formatTableStringData((studentArr[i].gender) ? "male": "female", 8) + "|";
    cout << formatTableStringData(intToString(studentArr[i].yearOfBirth), 14) + "|";
    cout << formatTableStringData(studentArr[i].className, 11) + "|";
    cout << formatTableStringData(floatToString(studentArr[i].math), 6) + "|";
    cout << formatTableStringData(floatToString(studentArr[i].english), 9) + "|";
    cout << formatTableStringData(floatToString(studentArr[i].physical), 10) + "|";
    cout << endl;
  }
}

void sortView(Student *studentArr, int arrLength) 
{
  string choose;

  cout << "1. Sap xep theo Ten." << endl;
  cout << "2. Sap xep theo Ma Sinh Vien (ID)." << endl;
  cout << "3. Sap xep theo diem Toan." << endl;
  cout << "4. Sap xep theo diem Tieng Anh." << endl;
  cout << "5. Sap xep theo diem Vat Ly." << endl;
  cout << "0. Quay lai.";

  cout << "Ban chon: ";
  cin >> choose;
  cin.clear();
  cin.ignore(10000,'\n'); 

  if (choose == "1") {
    
  }
  if (choose == "2") {
    for (int i = 0; i < arrLength; i++) {
      for(int j = i + 1; j < arrLength; j++){
        if (studentArr[i].id > studentArr[j].id) {
          Student temp = studentArr[i];
          studentArr[i] = studentArr[j];
          studentArr[j] = temp;
        }
      }
    }
    clearConsole();
    createStudentTableView(studentArr, arrLength);
    return;
  }
  if (choose == "3") {

  }
  if (choose == "4") {

  }
  if (choose == "5") {

  }
  if (choose == "0") {
    clearConsole();
    return;
  }
}

void createMenu(string mode) {
  if (mode == "main menu") {
    cout << "--------- o -----------" << endl;
    cout << "1. Hien thi danh sach sinh vien." << endl;
    cout << "2. Them sinh vien." << endl;
    cout << "3. Xoa sinh vien." << endl;
    cout << "4. Cap nhat sinh vien." << endl;
    cout << "5. Tim kiem sinh vien." << endl;
    cout << "6. Sap xep" << endl;
    cout << "0. Thoat khoi chuong trinh." << endl;
  }
}

void addStudentView() {
  int id;
  string name;
  string genderStringInput;
  bool gender;
  int yearOfBirth; 
  string className;
  float math;
  float english;
  float physical;

  cout << "--------- o -----------" << endl;

  cout << "Nhap ten: ";
  getline(cin, name);

  cout << "Nhap ma sinh vien (ID): ";
  cin >> id;
  cin.clear();
  cin.ignore(10000,'\n');

  cout << "Gioi tinh (nam/nu): ";
  cin >> genderStringInput;
  cin.clear();
  cin.ignore(10000,'\n');


  cout << "Nam sinh: ";
  cin >> yearOfBirth;
  cin.clear();
  cin.ignore(10000,'\n');

  cout << "Ten lop: ";
  getline(cin, className);

  cout << "Diem toan: ";
  cin >> math;
  cin.clear();
  cin.ignore(10000,'\n');

  cout << "Diem  tieng anh: ";
  cin >> english;
  cin.clear();
  cin.ignore(10000,'\n');

  cout << "Diem vat ly: ";
  cin >> physical;
  cin.clear();
  cin.ignore(10000,'\n');

  gender = trim(genderStringInput) == "nam";
  Student newStudent = { id, trim(name), gender, yearOfBirth, trim(className), math, english, physical };

  addStudent(newStudent);
}

void deleteStudentView(Student studentArray[], int studentArrLength) {
  string choose;

  cout << "1. Xoa theo ID" << endl;
  cout << "2. Xoa theo ten" << endl;
  cout << "0. Quay lai." << endl;
  // cout << "3. Xoa sinh vien duoc them gan nhat"
  cout << "Ban chon: ";
  cin >> choose;
  cin.clear();
  cin.ignore(10000,'\n'); 

  if (choose == "1") {
    int targetID;
    createStudentTableView(studentArray, studentArrLength);

    cout << "Nhap ID muon xoa: ";
    cin >> targetID;
    cin.clear();
    cin.ignore(10000,'\n');   

    deleteStudentByID(targetID);

    return;
  } 
  if (choose == "2") {
    string targetName;
    createStudentTableView(studentArray, studentArrLength);
    
    cout << endl;
    cout << "Nhap ten sinh vien muon xoa: ";
    getline(cin, targetName);

    deleteStudentByName(targetName);
    return;
  }

  if (choose == "0") {
    clearConsole();
    return;
  }

  clearConsole();
  cout << "Gia tri nhap khong khop." << endl;
  deleteStudentView(studentArray, studentArrLength);
}

/** 
 * Lay tat ca du lieu sinh vien
*/
void readStudentFile(Student *stdArr, int *length) 
{
  fstream file;
  string line;
  int lineNum = 0;

  file.open(studentFilePath, ios::in);
  while (!file.eof()) {
    getline(file, line);

    if (line.length() > 0) {
        stdArr[lineNum] = stringToStudent(line);

        lineNum+=1;
    } 
  }
  *length = lineNum;
}

int main()
{
  // Student newStudent = { 125, "Nguyen Van B", false, 2000, "KTM10", 5.0, 6.6, 4.8};
  // addStudent(newStudent);

  while (1)
  {
    string choose = "0";
    Student studentArray[100];
    int studentLength;

    readStudentFile(studentArray, &studentLength);
    
    createMenu("main menu");
      cout << "Ban chon: ";
      cin >> choose;
      cin.clear();
      cin.ignore(10000,'\n');

    clearConsole();

    if (choose == "1") 
      createStudentTableView(studentArray, studentLength);

    if (choose == "2") {
      addStudentView();
    }

    if (choose == "3") {
      deleteStudentView(studentArray, studentLength);
    }

    if (choose == "6") {
      sortView(studentArray, studentLength);
    }

    // exit 
    if (choose == "0") {
      return 1;
    }
  }
  

  return 0;
}