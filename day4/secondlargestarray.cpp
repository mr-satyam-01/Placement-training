#include <iostream>
using namespace std;

int main()
{

    int arr[10] = {8, 7, 11, 12, 42, 23, 17, 38, 18, 22};
    int largest = arr[0];
    int secondlargest = -1;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }
    cout << "largest " << largest<<endl;
    cout << "second largest " << secondlargest<<endl;
}