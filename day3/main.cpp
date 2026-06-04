#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter your age:" << endl;
    cin >> a;
    if (a >= 18)
    {
        cout << "you can vote";
    }
    else
    {
        cout << "you cannot vote";
    }

    return 0;
}