#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    vector <int> T;
    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        T.push_back(x);
    }
    sort(T.begin(), T.end());
    for (int i = 0; i < 10; i++)
    {
        cout << T[i] << " ";
    }
}
