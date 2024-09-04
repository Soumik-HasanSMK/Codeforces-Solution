#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v;
        ll sum = 0;
        for (int i = 1; i <= 9; i++)
        {
            sum += i;
            v.push_back(sum);
        }
        if (n <= 9)
        {
            cout << v[n - 1] << endl;
        }
        else
        {
            int x = n / 9;
            int y = n % 9;
            cout << v[9 - 1] * x + v[y - 1] << endl;
        }
        // cout << v[3];
    }
    return 0;
}