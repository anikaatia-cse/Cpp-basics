#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int x = t;
    while (t--)
    {
        int a, b, sum = 0;
        cin >> a >> b;
        for (int i = a; i < b; i++)
        {
            sum += i;
        }
        if (sum % 10 == 0)
        {
            cout << "Case #" << abs(x - t) <<": 1" << endl;
        }
        else
        {
            cout << "Case #" << abs(x - t) <<": 0" << endl;
        }
    }
}