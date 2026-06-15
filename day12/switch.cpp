#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    char expression;
    cout << "Enter two numbers" << endl;
    cin >> num1;
    cin >> num2;
    cout << "Enter operation (+, -, *, /, %): " << endl;
    cin >> expression;
    switch (expression)
    {
    case '+':
        cout << "Result: " << (num1 + num2) << endl;
        break;
    case '-':
        cout << "Result: " << (num1 - num2) << endl;
        break;
    case '*':
        cout << "Result: " << (num1 * num2) << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Result: " << (num1 / num2) << endl;
        }
        else
        {
            cout << "cannot divide with zero" << endl;
        }
        break;
    case '%':
        cout << "Result: " << (num1 % num2) << endl;
        break;
    default:
        cout << "Unknown operation" << endl;
    }
    return 0;
}