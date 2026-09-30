#include <iostream>
using namespace std;
// Write a C++ program to input any capital letter and display it with small letter without using tolower() functions.

int main()
{
    char capital_letter;
    cin >> capital_letter;
    char small_letter = capital_letter + 32;
    cout << "The small letter is: " << small_letter << endl;
    return 0;
}
