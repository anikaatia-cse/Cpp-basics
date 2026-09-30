#include <iostream>
using namespace std;
// Write a C++ program to input the number of days from user and convert it into years, months, and days.

int main()
{
    int days;
    cin >> days;
    int years = days / 365;
    int months = (days % 365) / 30;
    int remaining_days = (days % 365) % 30;
    cout << years << " years." << endl;
    cout << months << " months." << endl;
    cout << remaining_days << " days." << endl;
    return 0;
}
