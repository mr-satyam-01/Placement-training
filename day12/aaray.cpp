#include <iostream>
#include <algorithm>
using namespace std;

// 1: display forward---------------------
void displayForward(int *ptr, int size)
{
    cout << "Array elements are: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

// 2: display reverse---------------------
void displayReverse(int *ptr, int size)
{
    cout << "Array in reverse are: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

// 3: sort descending ---------------------
void sortDescending(int *ptr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (ptr[j] > ptr[maxIndex])
                maxIndex = j;
        }
        if (maxIndex != i)
            swap(ptr[i], ptr[maxIndex]);
    }
    cout << "Array in descending order are: ";
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

// 4: accept one more arr and merge it and find the mean of the merged arr
void merge(int *ptr, int size, int *ptr2, int size2)
{
    int merged[size + size2];
    for (int i = 0; i < size; i++)
    {
        merged[i] = *(ptr + i);
    }
    for (int i = 0; i < size2; i++)
    {
        merged[i + size] = *(ptr2 + i);
    }
    cout << "Merged array are: ";
    for (int i = 0; i < size + size2; i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;
}

// 5: display only even index position element
void even(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            cout << ptr[i] << " ";
        }
    }
    cout << endl;
}

//6: do sum of all elements and print
void sum(int *ptr, int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum = sum + ptr[i];
    }
    cout<<sum<<endl;
}

//7: Accept a no from user & print its index
void indexprint(int *ptr, int size){
    int num;
    cout<<"Enter your number: "<<endl;
    cin>>num;
    for(int i=0; i<size; i++){
        if(ptr[i] == num){
            cout<<"The index of the num: " << i << endl;
        }
    }
}

//8: do square of each element of array and print
void square(int *ptr, int size){
    int square[size];
    for(int i=0; i<size; i++){
        square[i] = ptr[i] * ptr[i];
    }
    for(int i=0; i<size; i++){
    cout<<square[i]<<" ";
}
cout<<endl;
}


int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int brr[] = {60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int size2 = sizeof(brr) / sizeof(brr[0]);
    int *ptr = arr;
    int *ptr2 = brr;

    displayForward(ptr, size);
    displayReverse(ptr, size);
    merge(ptr, size, ptr2, size2);
    sortDescending(ptr, size);
    even(ptr, size);
    sum(ptr, size);
    // indexprint(ptr, size);
    square(ptr, size);

    return 0;
}