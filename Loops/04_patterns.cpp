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
        int j = 1;
        while (j <= n)
        {
            cout << " * ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << n - j + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    int n;
    cin >> n;
    int count = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int count = i;
        int j = 1;
        while (j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i + 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    int n;
    cin >> n;
    int count = 1;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + count - 1;
            cout << ch;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
    */

    /*
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + n - i;
        while (j <= i)
        {
            cout << ch;
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
     */

    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // space print karna hai
        int space = n - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        // stars print karna hai
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}