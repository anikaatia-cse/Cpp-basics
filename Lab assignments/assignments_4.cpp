#include <iostream>
using namespace std;
//  Write a C++ program to calculate the sum of two integer numbers (given by the user) and print it.

int main()
{
    int a, b, sum;
    cout << "Enter two integers: ";
    cin >> a >> b;
    sum = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;
}