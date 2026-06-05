// Purpose of funtion is to make code more efficient:-
#include <iostream>
using namespace std;

// We have to make function here:-

int power(int a, int b)
{
    int ans = 1;

    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }

    return ans;
}
int main()
{

    // CODE FOR POWER (if we make this code as power function then we use directly everywhere in this file)
    /*
    int a, b;
    cin >> a;
    cin >> b;
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    cout << "answer is: " << ans << endl;
    return 0;
    */

    int a, b;
    cin >> a >> b;
    int ans = power(a, b);
    cout << "answer is " << ans << endl;
    return 0;
}