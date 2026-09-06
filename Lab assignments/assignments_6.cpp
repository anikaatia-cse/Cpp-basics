#include <iostream>
using namespace std;
//  Write a C++ program that will take three integer as input from user and print their average (use type-cast to get proper output)

int main()
{
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    double average = (a + b + c) / 3.0;
    cout << "Average: " << average << endl;
    return 0;
}