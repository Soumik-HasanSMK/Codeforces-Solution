#include <bits/stdc++.h>
using namespace std;
int main()
{
    int e;
    cin >> e;
    int m, r, s;
    s = 1;
    e = e - 1;
    if (e % 2 == 0)
    {
        int x = e / 2;
        m = x + 1;
        r = x - 1;
    }
    else
    {
        int x = e / 2;
        m = x + 1;
        r = x;
    }
    if (m + r + s == e + 1)
        cout << m << " " << r << " " << s;
    else
        cout << -1 << endl;
    return 0;
}