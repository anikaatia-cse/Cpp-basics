#include <iostream>
using namespace std;
// Write a C++ program to input three numbers from user and calculate the sum of first and last numbers. 
// Hint : I/p - 358, O/p - 11

int main()
{
    int num;
    cin >> num;
    int first_digit = num / 100;
    int last_digit = num % 10;
    int sum = first_digit + last_digit;
    cout << "Sum of first and last digit is: " << sum << endl;
    return 0;
}