#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    int day, month, year;

    cout << "Nhap ngay: "; cin >> day;
    cout << "Nhap thang: "; cin >> month;

    /** ngay 1/1/2020 */
    struct tm date1 = {0,0,0,0,0,120};
    
    /**
     * so ngay, thang bat dau tu 0.
     * So nam bat dau tinh tu 1900
     */
    struct tm date2 = {0,0,0,day -1,month -1,120};
    
    time_t x = std::mktime(&date1);
    time_t y = std::mktime(&date2);
    
    if ( x != (std::time_t)(-1) && y != (std::time_t)(-1) )
    {
        double difference = difftime(y, x) / (60 * 60 * 24);
        cout << "So ngay da qua tinh tu dau nam la = ";
        cout << difference << " days" << endl;
    }
    return 0;
}
