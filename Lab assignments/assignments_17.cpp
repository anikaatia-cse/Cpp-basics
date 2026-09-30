#include <iostream>
using namespace std;
// Write a C++ program to input any small letter and display it with capital letter without using tolower() functions.

int main()
{
    char small_letter;
    cin >> small_letter;
    char capital_letter = small_letter - 32;
    cout << "The capital letter is: " << capital_letter << endl;
    return 0;
}
