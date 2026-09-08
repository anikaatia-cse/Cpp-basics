#include <iostream>
using namespace std;
//  Write a C++ program to convert Celcius value into Fahrenheit value.

int main()
{
    int celcius, fahrenheit;
    cout << "Enter the Celcius value: " << endl;
    cin >> celcius;
    fahrenheit = (9 * celcius / 5 + 32);
    cout << "The converted Fahrenheit value is: " << fahrenheit << endl;
    return 0;
}