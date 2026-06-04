#include <iostream>
using namespace std;

struct Student {
    int roll;
    string name;
    float marks;
};

int main() {
    Student s[3];   // Array of 3 structures

    // Input
    for (int i = 0; i < 3; i++) {
        cout << "Enter Roll No, Name and Marks for Student "
             << i + 1 << ": ";
        cin >> s[i].roll >> s[i].name >> s[i].marks;
    }

    // Output
    cout << "\nStudent Details:\n";

    for (int i = 0; i < 3; i++) {
        cout << "\nStudent " << i + 1 << endl;
        cout << "Roll No: " << s[i].roll << endl;
        cout << "Name: " << s[i].name << endl;
        cout << "Marks: " << s[i].marks << endl;
    }

    return 0;
}