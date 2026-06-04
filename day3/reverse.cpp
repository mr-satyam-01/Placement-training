#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number" << endl;
    cin >> num;
    int rev = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        rev = (rev * 10) + lastdigit;
        num = num/10;
    }
    cout << rev << endl;
}