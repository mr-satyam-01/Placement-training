#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    return num1 + num2;
}
int sub(int num1, int num2)
{
    return num1 - num2;
}
int divide(int num1, int num2)
{
    return num1 / num2;
}
int mul(int num1, int num2)
{
    return num1 * num2;
}
int mod(int num1, int num2)
{
    return num1 % num2;
}

int calci(int num1, int num2, char expression)
{
    switch (expression)
    {
    case '+':
        cout << "Result: " << add(num1, num2) << endl;
        break;
    case '-':
        cout << "Result: " << sub(num1, num2) << endl;
        break;
    case '*':
        cout << "Result: " << mul(num1, num2) << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Result: " << divide(num1, num2) << endl;
        }
        else
        {
            cout << "cannot divide with zero" << endl;
        }
        break;
    case '%':
        cout << "Result: " << mod(num1, num2) << endl;
        break;
    default:
        cout << "Unknown operation" << endl;
    }
    return 0;
}

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
    calci(num1, num2, expression);
}