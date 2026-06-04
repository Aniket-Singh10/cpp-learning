#include <iostream>
using namespace std;
int main()
{
    // Input two integers
    int a, b;
    cout << "Enter first number :" << endl;
    cin >> a;
    cout << "Enter second number :" << endl;
    cin >> b;

    int rem;

    // Repeat until remainder becomes 0
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    cout << "GCD is " << a;

    return 0;
}