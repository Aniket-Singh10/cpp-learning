#include <iostream>
using namespace std;
int main()
{
    cout << "The perfect numbers between 1 to 500 are:-" << endl;
    // Check each number from 1 to 500
    for (int n = 1; n <= 500; n++)
    {
        int sum = 0;

        // Find all proper divisors of n
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                sum += i;
            }
        }

        if (sum == n)
        {
            cout << n << " ";
        }
    }

    return 0;
}