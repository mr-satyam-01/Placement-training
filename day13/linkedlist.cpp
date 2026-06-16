#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;
    Student *next;
};
Student *head = NULL;
Student *tail = NULL;
void insertAtBeginning()
{
    Student *newNode = new Student();

    cout << "Enter Roll No: ";
    cin >> newNode->rollNo;

    cout << "Enter Name: ";
    cin >> newNode->name;

    newNode->next = head;
    head = newNode;

    if (tail == NULL)
    {
        tail = newNode;
    }
}

void insertInMiddle()
{
    if (head == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }

    Student *newNode = new Student();

    cout << "Enter Roll No: ";
    cin >> newNode->rollNo;

    cout << "Enter Name: ";
    cin >> newNode->name;

    Student *temp = head;

    newNode->next = temp->next;
    temp->next = newNode;
}
void createnode()
{
    Student *newNode = new Student();

    cout << "Enter Roll No: ";
    cin >> newNode->rollNo;

    cout << "Enter Name: ";
    cin >> newNode->name;

    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    void display()
    {
        Student *temp = head;

        while (temp != NULL)
        {
            cout << "Roll No: " << temp->rollNo << endl;
            cout << "Name: " << temp->name << endl;
            cout << "----------------" << endl;

            temp = temp->next;
        }
    }
    int main()
    {

        int n;
        cout << "Enter number of students: ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            createnode();
        }
        cout << "\nInsert at beginning" << endl;
        insertAtBeginning();

        cout << "\nInsert in middle" << endl;
        insertInMiddle();

        display();
    }

    return 0;
}