// These are some header files of cpp:-
/*
#include <iostream>   // cin, cout
#include <iomanip>    // fixed, setprecision
#include <string>     // string
#include <cmath>      // sqrt, pow, abs
#include <algorithm>  // sort, max, min
#include <vector>     // vector
*/

// COMMON C++ HEADERS DOCUMENTATION

// 1. <iostream>
// Used for input and output

#include <iostream>
using namespace std;

int main()
{
    int age;
    cin >> age;   // takes input
    cout << age;  // prints output
    cout << "\n"; // new line

    return 0;
}

// 2. <iomanip>
// Used for formatting output, mainly decimal places

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 12.34567;

    cout << fixed << setprecision(2) << x;

    return 0;
}

// Output:
// 12.35

// 3. <string>
// Used for text

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cin >> name;
    cout << "Hello" << name;
    return 0;
}

// 4. <cmath>
// Used for math functions

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << sqrt(25) << "\n";   // square root
    cout << pow(2, 3) << "\n";  // power
    cout << abs(-10) << "\n";   // absolute value
    cout << ceil(4.2) << "\n";  // round up
    cout << floor(4.8) << "\n"; // round down

    return 0;
}

// Output:
// 5
// 8
// 10
// 5
// 4

// 5. <algorithm>
// Used for sort, min, max, reverse

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << max(10, 20) << "\n";
    cout << min(10, 20) << "\n";

    return 0;
}
// Sorting array using <algorithm>

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[5] = {5, 2, 9, 1, 3};

    sort(arr, arr + 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

// Output:
// 1 2 3 5 9

// 6. <vector>
// Used for dynamic arrays

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << v[0] << "\n";
    cout << v.size() << "\n";

    v.pop_back();

    cout << v.size();

    return 0;
}

// Output:
// 10
// 3
// 2