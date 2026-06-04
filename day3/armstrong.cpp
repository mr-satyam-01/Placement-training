#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number" << endl;
    cin >> num;
    int initial = num;
    int final = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        final = final + (lastdigit * lastdigit * lastdigit);
        num = num / 10;
    }
    if (final == initial)
    {
        cout << "This number is Armstrong number";
    }
    else
    {
        cout << "This number is not Armstrong number";
    }
    return 0;
}