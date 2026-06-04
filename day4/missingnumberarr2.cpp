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
    int temp[10] = {0};
    for (int i = 0; i < n; i++)
    {
        temp[arr[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if(temp[i]==0){
            cout<<i;
        }
    }
    
}