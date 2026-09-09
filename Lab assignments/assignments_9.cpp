#include <iostream>
using namespace std;
//  Write a C++ program to interchange the values of two numbers using third variable.

int main()
{
    int a, b, c;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "After interchange: " << a << ", " << b << endl;
    return 0;
}