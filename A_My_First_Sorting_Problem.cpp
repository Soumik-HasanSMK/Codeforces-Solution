#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            cout << b << " " << a << endl;
        else
            cout << a << " " << b << endl;
    }
    return 0;
}