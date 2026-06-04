#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {8, 7, 11, 12, 42, 23, 17, 38, 18, 22};
    int evencount = 0;
    int oddcount = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evencount++;
        }
        else
        {
            oddcount++;
        }
    }
    cout << "even = " << evencount << endl;
    cout << "odd = " << oddcount << endl;
}