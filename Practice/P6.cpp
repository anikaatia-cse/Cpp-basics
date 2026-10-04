#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// prints second highest among 3 numbers.
int main()
{
    int x;
    vector <int> T;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        T.push_back(x);
    }
    sort(T.begin(), T.end());
    for (int i = 0; i < 3; i++)
    {
        cout << T[1] << endl;
        break;
    }
}