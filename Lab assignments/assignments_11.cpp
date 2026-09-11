#include <iostream>
using namespace std;
//  Write a C++ program to input two numbers and find their quotient and remainder.
int main()
{
    int a, b, quotient, remainder;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    quotient = a / b;
    remainder = a % b;
    cout << "The quotient of " << a << " and " << b << " is: " << quotient << endl;
    cout << "The remainder of " << a << " and " << b << " is: " << remainder << endl;
    return 0;  
}