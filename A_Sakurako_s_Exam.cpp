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
        int a, b;
        cin >> a >> b;
        if (a % 2 == 0 && b % 2 == 0)
            cout << "YES" << endl;
        else if (a != 0 && a % 2 == 0 && b % 2 != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}