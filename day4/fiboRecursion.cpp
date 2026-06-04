#include <iostream>
using namespace std;

int fibo(int num)
{
    if (num <= 1)
    {
        return num;
    }

    return fibo(num - 1) + fibo(num - 2);
}
int main()
{
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << fibo(i)<<endl;
    }
    return 0;
}
