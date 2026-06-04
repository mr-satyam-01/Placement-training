#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number" << endl;
    cin >> num;
    int initial = num;
    int square = (num * num);
    int sum = 0;
    while (square > 0)
    {
        int lastdigit = square % 10;
        sum = sum + lastdigit;
        square = square / 10;
    }
    if (sum == initial)
    {
        cout << "This is a neon number" << endl;
    }
    else
    {
        cout << "This is not a neon number" << endl;
    }
}