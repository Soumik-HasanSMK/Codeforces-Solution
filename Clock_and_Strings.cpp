#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool intersect(int a, int b, int c, int d)
{
    if ((c > min(a, b) && c < max(a, b)) != (d > min(a, b) && d < max(a, b)))
        return true;
    if ((a > min(c, d) && a < max(c, d)) != (b > min(c, d) && b < max(c, d)))
        return true;
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        bool ans = intersect(a, b, c, d);

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
