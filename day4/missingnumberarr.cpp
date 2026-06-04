#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = (n * (n + 1)) / 2;
    int arrsum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        arrsum = arrsum + arr[i];
    }
    cout << "missing number " << sum - arrsum << endl;
}