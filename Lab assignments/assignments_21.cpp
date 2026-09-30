#include <iostream>
using namespace std;
// Write a C++ program to input two digits number from user and display with reverse number on screen
// Hint : I/p - 32, O/p - 23

int main()
{
    int num;
    cin >> num;
    int first_digit = num / 10;
    int last_digit = num % 10;
    int reverse = last_digit * 10 + first_digit;
    cout << "The reverse of the number is: " << reverse << endl;
    return 0;
}