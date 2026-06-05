#include <iostream>
using namespace std;

// Even --> 1
// Odd --> 0
bool even(int a)
{
    // Odd number
    if (a & 1) // AND operator binary operation
    {
        return 0;
    }
    else
    {
        // Even number
        return 1;
    }
}
int main()
{

    int num;
    cin >> num;
    if (even(num))
    {
        cout << "Number is Even" << endl;
    }
    else
    {
        cout << "Number is Odd" << endl;
    }
}
