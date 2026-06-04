#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 4, 6, 7, 9, 3, 5, 7, 1, 4};
    bool target = false;
    int sum = 9;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 9; j>=0; j--)
        {
            if ((arr[i] + arr[j]) == sum)
            {
                target = true;
            }
        }
    }
    cout << target;
} 