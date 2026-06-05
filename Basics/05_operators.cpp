#include <iostream>
using namespace std;

int main()
{
    // int height, base;
    // float area;
    // cout << "Enter height of the triangle" << endl;
    // cin >> height;
    // cout << "Enter base of the triangle" << endl;
    // cin >> base;
    // area = 0.5 * (base * height);
    // cout << "Area of the triangle : " << area << endl;
    // return 0;

    // Left Shift and Right Shift:-
    cout << (3 << 2) << endl;
    cout << (5 << 3) << endl;
    cout << (5 >> 1) << endl;
    cout << (21 >> 2) << endl;
    cout << (100 << 1) << endl;
}
/*
C++ OPERATOR PRECEDENCE (HIGH → LOW)

1. () [] . ->
2. postfix ++ --
3. prefix ++ -- ! unary + unary -
4. * / %
5. + -
6. < <= > >=
7. == !=
8. &&
9. ||
10. = += -= *= /= %=

ASSOCIATIVITY

Left → Right:
() [] . ->
postfix ++ --
* / %
+ -
< <= > >=
== !=
&&
||

Right → Left:
prefix ++ --
!
=
+= -= *= /= %=

INCREMENT RULES

a++  → Use value first, then increase
++a  → Increase first, then use value

EXAMPLE

int a = 5;
int b = a++;

b = 5
a = 6

int a = 5;
int b = ++a;

a = 6
b = 6

DRY RUN ORDER

1. Brackets ()
2. Prefix (++a, --a)
3. Multiplication/Division/Modulus (* / %)
4. Addition/Subtraction (+ -)
5. Relational (< <= > >=)
6. Equality (== !=)
7. Logical (&& ||)
8. Assignment (=)

MEMORY TRICK

Precedence = Which operator goes first?
Associativity = If same precedence, which direction?
*/