#include <iostream>
using namespace std;
// Write a C++ program to input three digits number from user and display square of first and last numbers.
// Hint : I/p - 358, O/p - 9 64

int main()
{
     int num;
    cin >> num;
    int first_digit = num / 100;
    int last_digit = num % 10;
    int square_first = first_digit * first_digit;
    int square_last = last_digit * last_digit;
    cout << "The square of first digit is: " << square_first << endl;
    cout << "The square of last digit is: " << square_last << endl;
    return 0;
}