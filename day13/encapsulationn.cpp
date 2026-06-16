#include <iostream>
using namespace std;


// here we are implementing oops concepts for the object laptop
// Encapsulation
class Laptop {
private:
    string brand;
    float price;

public:
    void setData(string b, float p) {
        brand = b;
        price = p;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
    }
};

// Abstraction
class StartLaptop {
private:
    void checkHardware() {
        cout << "Checking hardware..." << endl;
    }

public:
    void start() {
        checkHardware();
        cout << "Laptop Started" << endl;
    }
};

// Polymorphism----------------------------------------------------------



class LaptopType {
public:
    virtual void purpose() {
        cout << "Laptop is used for general tasks" << endl;
    }
};

class OfficeLaptop : public LaptopType {
public:
    void purpose() override {
        cout << "Office Laptop is used for office work" << endl;
    }
};

class StudentLaptop : public LaptopType {
public:
    void purpose() override {
        cout << "Student Laptop is used for studying and assignments" << endl;
    }
};



// Multilevel Inheritance--------------------------------------

class Device {
public:
    void powerOn() {
        cout << "Device Powered On" << endl;
    }
};

class Computer : public Device {
public:
    void processData() {
        cout << "Process the Data" << endl;
    }
};

class GamingLaptop : public Computer {
public:
    void portability() {
        cout << "Laptop is Portable" << endl;
    }
};


//--------------------------------------------------------------------------
int main() {
    cout << "Encapsulation:" << endl;
    Laptop l;
    l.setData("Dell", 65000);
    l.display();

    cout << "\nAbstraction:" << endl;
    StartLaptop s;
    s.start();
//---------------------------------------------------------------------------

    cout << "\nPolymorphism:" << endl;
    LaptopType* laptop;

    OfficeLaptop office;
    StudentLaptop student;

    laptop = &office;
    laptop->purpose();

    laptop = &student;
    laptop->purpose();

    //---------------------------------------------------------

    cout << "\nMultilevel Inheritance:" << endl;
    GamingLaptop g;
    g.powerOn();
    g.processData();
    g.portability();

    return 0;
}
