#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    Student* next;
};

int main() {
    // Creating nodes
    Student* s1 = new Student();
    Student* s2 = new Student();
    Student* s3 = new Student();

    // First student
    s1->rollNo = 101;
    s1->name = "Satyam";
    s1->next = s2;

    // Second student
    s2->rollNo = 102;
    s2->name = "Maurya";
    s2->next = s3;

    // Third student
    s3->rollNo = 103;
    s3->name = "Priya";
    s3->next = NULL;

    // Displaying linked list
    Student* temp = s1;

    while (temp != NULL) {
        cout << "Roll No: " << temp->rollNo << endl;
        cout << "Name: " << temp->name << endl;

        temp = temp->next;
    }

    return 0;
}