#include <iostream>
using namespace std;
//  Write a C++ program to convert Km value into meter value.

int main()
{
    int meter, km;
    cout << "Enter the Km value: " << endl;
    cin >> km;
    meter = km * 1000;
    cout << "The converted value is: " << meter << endl;
    return 0;
}