#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {8, 7, 1, 2, 2, 3, 7, 8, 8, 9};

    int largest = arr[0];
    for (int i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (arr[j] > arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    long long num = 0;

    for (int i = 0; i < 10; i++)

    {
        num = num * 10 + arr[i];
    }

    cout << num;
}







