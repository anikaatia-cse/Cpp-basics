#include <iostream>
using namespace std;
// Write a C++ program to find out the quotient and remainder of two numbers without using modulus (%) operator.

int main()
{
    int dividend, divisor;
    cin >> dividend >> divisor;
    int quotient = dividend / divisor;
    int remainder = dividend - (quotient * divisor);
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;
    return 0;
}