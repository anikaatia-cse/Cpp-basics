#include <iostream>
using namespace std;
//  Write a C++ program to accept any character from user and display its ASCII number on screen.

int main()
{
    char ch;
    cout << "Enter the character: " << endl;
    cin >> ch;
    int ascii = static_cast<int>(ch);
    cout << "The ASCII value is: " << ascii << endl;
    return 0;
}