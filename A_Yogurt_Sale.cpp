#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        int ans = 0;
        if (a * 2 > b)
        {
            if (n % 2 == 0)
            {
                ans = (n / 2) * b;
            }
            else
            {
                ans = (n / 2) * b + a;
            }
        }
        else
        {
            ans = n * a;
        }
        cout << ans << endl;
    }
    return 0;
}