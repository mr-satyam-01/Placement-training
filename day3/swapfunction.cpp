#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x=23;
    int y=12;
    swap(x, y);
    cout<<x<<endl;
    cout<<y<<endl;
} 