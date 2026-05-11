#include <iostream>
using namespace std;
int main()
{
    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        cout << i << " ";
        i += 1;
    }
    */
    /*
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        sum += i;
        i += 1;
    }
    cout << "value of sum is : " << sum << endl;
    */

    /*
    int x;
    cin >> x;
    int i = 1;
    int sum = 0;
    while (i <= x)
    {
        sum = sum + i;
        i = i + 1;
    }
    cout << "Sum of all numbers : " << sum << endl;
    */

    /*
    int x;
    cin >> x;
    int i = 0;
    int sum = 0;
    while (i <= x)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout << "Sum of all numbers : " << sum << endl;
    */

    /*
    int f;
    cout << "Enter how much Fahrenheit : ";
    cin >> f;
    int c = 5.0 / 9.0 * (f - 32);
    cout << "Temperature in celcius : " << c << endl;
    */

    /*
    int n;
    cout << "Enter number : ";
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number by " << i << endl;
        }
        else
        {
            cout << "Prime number by " << i << endl;
        }
        i = i + 1;
    }
    */

    /*
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            cout << "Not Prime ";
            return 0;
        }
        i = i + 1;
    }
    cout << "Prime";
    */

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}