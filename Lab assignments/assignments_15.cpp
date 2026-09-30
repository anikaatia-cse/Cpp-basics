#include <iostream>
#include <cctype>
using namespace std;
// Write a C++ program to input any small letter and display it with capital letter.

int main()
{
    char small_letter;
    cin >> small_letter;
    char capital_letter = toupper(small_letter);
    cout << "The capital letter is: " << capital_letter << endl;
    return 0;
}
