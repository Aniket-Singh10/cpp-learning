#include <iostream>
using namespace std;
int main()
{
    // Simple Arithmetic caclculator
    // Using variable initialization to avoid garbage values
    int choice = 0;
    int a = 0;
    int b = 0;
    do
    {
        cout << "\tEnter Option you want to Proceed:- " << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;

        cin >> choice;

        // Validate menu input
        if (cin.fail())
        {
            cout << "Invalid Input" << endl;
            cin.clear();            // Clear error state
            cin.ignore(1000, '\n'); // Remove invalid input

            continue; // Return to menu
        }
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter two integers" << endl;
            cout << "first number: ";
            cin >> a;
            if (cin.fail())
            {
                cout << "Invalid Input" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
            cout << "second number: ";
            cin >> b;
            if (cin.fail())
            {
                cout << "Invalid Input" << endl;
                cin.clear();
                cin.ignore(1000, '\n');
                continue;
            }
        }
        switch (choice)
        {
        case 1:
            cout << "Result = " << a + b << endl;
            break;
        case 2:
            cout << "Result = " << a - b << endl;
            break;
        case 3:
            cout << "Result = " << a * b << endl;
            break;
        case 4:
            if (b == 0)
            {
                cout << "Division by zero is not allowed" << endl;
            }
            else
            {
                cout << "Result = " << a / b << endl;
            }
            break;
        case 5:
            cout << "Thanks for using this calculator" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (choice != 5); // Continue until Quit option is selected
}