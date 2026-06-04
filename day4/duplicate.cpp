#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10] = {2, 2, 3, 32, 10, 5, 7, 10, 6, 7};
    sort(arr, arr + 10);
    cout << "Duplicates: ";
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] == arr[i - 1] && arr[i] != arr[i - 2])
        {
            cout << arr[i] << " ";
        }
    }
}