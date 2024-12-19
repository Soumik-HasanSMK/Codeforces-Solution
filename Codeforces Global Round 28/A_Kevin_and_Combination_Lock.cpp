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
        ll n;
        cin >> n;
        cout << (n % 33 == 0 ? "YES" : "NO") << endl;
    }
    return 0;
}