#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool smk = false;
        string a, b;

        cin >> a >> b;
        char c1, d1;
        d1 = min(b[0], b[1]);
        if (a[0] > d1 || a[1] > d1)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }
    return 0;
}