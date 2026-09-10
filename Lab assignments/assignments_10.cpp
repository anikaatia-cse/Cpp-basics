#include <iostream>
using namespace std;
//  Write a C++ program to interchange the values of two numbers without using third variable.
int main()
{
    int a, b;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After interchange: " << a << ", " << b << endl;
    return 0;
}