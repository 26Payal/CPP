#include <iostream>
using namespace std;
class Date
{
public:
    int day, month, year;
    Date setDate()
    {
        time_t now = time(0);
        tm *ltm = localtime(&now);
        Date temp;
        temp.day = ltm->tm_mday;
        temp.month = 1 + ltm->tm_mon;
        temp.year = 1900 + ltm->tm_year;
        return temp;
    }
    Date getDate()
    {
        Date temp;
        temp.day = day;
        temp.month = month;
        temp.year = year;
        return temp;
    }
    Date setDob(int d, int m, int y)
    {
        Date temp;
        temp.day = d;
        temp.month = m;
        temp.year = y;
        return temp;
    }
    Date findAge(Date bd)
    {
        Date temp, pd;
        pd = pd.setDate(); // for getting the present date month and year
        int d, m, y;
        int md[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        y = pd.year - bd.year;
        if (pd.month < bd.month)
        {
            y--;
            m = 12 - (bd.month - pd.month);
        }
        else
        {
            m = pd.month - bd.month;
        }
        if (pd.day < bd.day)
        {
            m--;
            d = md[pd.month - 1] - (bd.day - pd.day);
        }
        else
        {
            d = pd.day - bd.day;
        }
        temp.month = m;
        temp.year = y;
        temp.day = d;
        return temp;
    }
};
int main()
{
    Date d4, d5, d6;
    int d, m, y;
    d4 = d4.setDate();
    cout << "\nCurrent Date is " << endl;
    cout << "Day : " << d4.day << " Month : " << d4.month << " Year : " << d4.year << endl;
    cout << "\n Enter the day ,month ,year to find age" << endl;
    cout << "Enter Day\n";
    cin >> d;
    cout << "Enter Month\n";
    cin >> m;
    cout << "Enter Year\n";
    cin >> y;
    d5 = d5.setDob(d, m, y); // settind dob entered by user
    d6 = d6.findAge(d6);     // passing dob object to find age
    cout << "Your Age is : \n";
    cout << d6.year << " Years " << d6.month << " Months " << d6.day << " Days. ";
    return 0;
}
