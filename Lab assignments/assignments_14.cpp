#include <iostream>
#include <cctype>
using namespace std;
// Write a C++ program to input any capital letter and display it with small letter.

int main()
{
    char capital_letter;
    cin >> capital_letter;
    char small_letter = tolower(capital_letter);
    cout << "The small letter is: " << small_letter << endl;
    return 0;
}
