#include <iostream>
using namespace std;

// Namespace for addition
namespace Addition
{
    int calculate(int num1, int num2)
    {
        return num1 + num2;
    }
}

// Namespace for subtraction
namespace Subtraction
{
    int calculate(int num1, int num2)
    {
        return num1 - num2;
    }
}

// Namespace for multiplication
namespace Multiplication
{
    int calculate(int num1, int num2)
    {
        return num1 * num2;
    }
}

// Namespace for division
namespace Division
{
    float calculate(int num1, int num2)
    {
        return (float)num1 / num2;
    }
}

int main()
{
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Result: ";

    if (op == '+')
    {
        cout << Addition::calculate(num1, num2);
    }
    else if (op == '-')
    {
        cout << Subtraction::calculate(num1, num2);
    }
    else if (op == '*')
    {
        cout << Multiplication::calculate(num1, num2);
    }
    else if (op == '/')
    {
        if (num2 != 0)
            cout << Division::calculate(num1, num2);
        else
            cout << "Division by zero is not allowed!";
    }
    else
    {
        cout << "Invalid Operator!";
    }

    return 0;
}
