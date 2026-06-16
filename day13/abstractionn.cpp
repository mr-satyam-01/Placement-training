#include <iostream>
using namespace std;

class Laptop {
public:
    void startLaptop() {
        cout << "Laptop is starting..." << endl;
    }
};

int main() {
    Laptop l;
    l.startLaptop();

    return 0;
}