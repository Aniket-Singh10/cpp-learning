#include <iostream>
using namespace std;
int main()
{
    // Simple Arithmetic caclculator
    int choice;
    int a;
    int b;
    cout << "Enter number you want to proceed: " << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Quit" << endl;
    cin >> choice;

    if (choice >= 1 && choice <= 4)
    {
        cout << "Enter two numbers" << endl;
        cout << "first number: ";
        cin >> a;
        cout << "second number: ";
        cin >> b;
    }

    switch (choice)
    {
    case 1:
        cout << a + b << endl;
        break;
    case 2:
        cout << a - b << endl;
        break;
    case 3:
        cout << a * b << endl;
        break;
    case 4:
        // cout << a / b << endl;
        if (b == 0)
        {
            cout << "Division by zero not allowed";
        }
        else
        {
            cout << a / b;
        }
        break;
    case 5:
        cout << "Thanks for using this calculator" << endl;
        break;

    default:
        cout << "Invalid choice" << endl;
    }
}