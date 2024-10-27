#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll sum = 0;
        sum += b - d;
        sum += (a - c) * (b - 1);
        sum += (a - c) * b;
        cout << sum << endl;
    }
    return 0;
}