#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ans;
        if (a == b)
            ans = c;
        if (a == c)
            ans = b;
        if (c == b)
            ans = a;
        cout << ans << endl;
    }
    return 0;
}