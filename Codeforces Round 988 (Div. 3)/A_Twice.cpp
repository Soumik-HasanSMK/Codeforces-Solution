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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        map<int, int> mp;
        for (auto &x : v)
        {
            mp[x]++;
        }
        int cnt = 0;
        for (auto &x : mp)
        {
            cnt += (x.second) / 2;
        }
        cout << cnt << endl;
    }
    return 0;
}