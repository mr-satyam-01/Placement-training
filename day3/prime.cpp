#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    bool isPrime = true;

    if (num <= 1)
        isPrime = false;

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    cout << (isPrime ? "Prime" : "Not Prime");

    return 0;
}