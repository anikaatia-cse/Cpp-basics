#include <iostream>
using namespace std;
// Write a C++ program to input any ASCII number from user and display appropriate character on screen.

int main()
{
    int asciiNumber;
    cout << "Enter the ASCII number: " << endl;
    cin >> asciiNumber;
    char character = static_cast<char>(asciiNumber);
    cout << "The character is: " << character << endl;
    return 0;
}
