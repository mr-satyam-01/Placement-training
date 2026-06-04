#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter your number" << endl;
    cin >> num;
    int a = 0;
    int b = 1;
    int c = 0;
    cout<<a<<endl;
    cout<<b<<endl;
     for (int i = 0; i <= num; i++)
    {
        int c = a + b;
        cout << c << endl;
        a=b;
        b=c;
    }
}