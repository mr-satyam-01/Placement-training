#include <iostream>
using namespace std;
int main()
{
    string promoted;
    string onsite;
    string bonus;
    
    cout << "Answer in yes or no only" << endl;
    cout << "Are you promoted: " << endl;
    cin >> promoted;
    cout << "Do you received bonus: " << endl;
    cin >> bonus;
    cout << "Do you work onsite: " << endl;
    cin >> onsite;

    if (bonus == "yes" && onsite == "no")
    {
        cout << "you are elogible for working from home";
    }
    else
    {
        cout << "you are not eligible for working form home";
    }
}
