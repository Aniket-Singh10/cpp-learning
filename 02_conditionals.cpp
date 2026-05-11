#include <iostream>
using namespace std;

int main()
{
    /*
        int x;
        cin >> x;
        cout << "value of n is:" << x << endl;
        if (x > 0)
        {
            cout << "number is positive" << endl;
        }
        else
        {
            cout << "number is negative" << endl;
        }
    */

    /*
       int a;
       cout << "enter the value of a:" << endl;
       cin >> a;
       int b;
       cout << "enter the value of b:" << endl;
       cin >> b;

       if (a > b)
       {
           cout << "A is greater" << endl;
       }
       else
       {
           cout << "B is greater" << endl;
       }
    */

    /*
    int a = 5;
    int b = 65;
    int c = a + b;
    cout << (a * b) << endl;
    bool first = (a < b);
    bool second = (a == a);
    cout << first << endl; // true = 1, false = 0
    cout << second << endl;
    */

    char ch;
    cout << "Enter character:";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is lower case ";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "This is upper case ";
    }
    else if (ch >= '0' && ch <= '9')
    {
        cout << "This is numeric ";
    }
    else
    {
        cout << "Special Character ";
    }
}