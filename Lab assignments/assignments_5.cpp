#include <iostream>
using namespace std;
//  Write a C++ program that will take three number from the user and find their average.

int main()
{
    int a, b, c, average;
    cout << "Enter three numbers: " << endl;
    cin >> a >> b >> c;
    average = (a + b + c) / 3;
    cout << "The average of " << a << ", " << b << ", and " << c << " is: " << average << endl;
    return 0;
}