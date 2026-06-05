#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int gpa;
    // gpa range 0 to 4
    cout << "Please enter your gpa : ";
    cin >> gpa;
    // 0->Terrible ; 1->Satisfactory ; 2->Average ; 3->Good ; 4->Excellent

    switch (gpa)
    {
    case 0:
        cout << "Terrible" << endl;
        break; // its good to end with break always
    case 1:
        cout << "Satisfactory" << endl;
    case 2:
        break;
        cout << "Average" << endl;
    case 3:
        cout << "Good" << endl;
        break;
    case 4:
        cout << "Excellent" << endl;
        break;

    default:
        cout << "Enter correct gpa" << endl;
    }
    // write a program to check if three points on x-y plane are collinear?
    // using herons formula
    int x1, x2, x3, y1, y2, y3;
    int a, b, c, s, area;
    // x1, y1 = 1
    // x2, y2 = 2
    // x3, y3= 3
    // 1-2 = a
    // 2-3 = b
    // 3-1 = c
    cout << "Enter values of first point (x and y respectively):" << endl;
    cin >> x1 >> y1;
    cout << "Enter values of second point (x and y respectively):" << endl;
    cin >> x2 >> y2;
    cout << "Enter values of third point (x and y respectively):" << endl;
    cin >> x3 >> y3;

    // sqrt, pow
    // distance of each sides:-
    a = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    b = sqrt(pow((x2 - x3), 2) + pow((y2 - y3), 2));
    c = sqrt(pow((x3 - x1), 2) + pow((y3 - y1), 2));
    s = (a + b + c) / 2;

    cout << "A: " << a << " B: " << b << " C: " << c << endl
         << "S: " << s << endl;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    cout << "Area of triangle: " << area << endl;

    if (area == 0) // !area this is also same as logical operator
    {
        cout << "Points are collinear" << endl;
    }
    else
    {
        cout << "Points are not collinear" << endl;
    }
    return 0;
}