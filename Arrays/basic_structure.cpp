#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter marks for each students" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Marks are: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}