#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> v;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v.push_back(a);
        }
        ll sum = 0, cnt = 0;
        ll i = 0, j = n - 1;
        while (i <= j)
        {
            if (sum + v[i] <= k)
            { // Check if adding v[i] exceeds k
                sum += v[i];
                cnt++;
                i++;
            }
            else if (sum + v[j] <= k)
            { // Check if adding v[j] exceeds k
                sum += v[j];
                cnt++;
                j--;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
