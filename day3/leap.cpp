#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "Enter your year" << endl;
    cin >> year;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "This year is a leap year";
    }
    else
    {
        cout << "This is not a leap year";
    }
    return 0;
}