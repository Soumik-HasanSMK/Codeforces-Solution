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
        ll s = 0;
        if (a < 1000)
        {
            a += 1000;
            for (int i = 0; i < b - 1; i++)
            {
                a *= 2;
            }
        }
        else
        {
            for (int i = 0; i < b; i++)
            {
                a *= 2;
            }
        }
        cout << a << endl;
    }
    return 0;
}