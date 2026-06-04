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
    cout << "for the input " << a << " and " << b << " ";

    // Repeat until remainder becomes 0
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    cout << ",the GCD is: " << a;

    return 0;
}