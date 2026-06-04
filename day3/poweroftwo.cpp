#include <iostream>
using namespace std;

int main()
{
int n;
cin >> n;

if (n > 0 && log2(n) == (int)log2(n))
    cout << "Power of 2";
else
    cout << "Not a power of 2";
}


