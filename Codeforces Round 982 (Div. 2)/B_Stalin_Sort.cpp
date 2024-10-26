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
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int cnt = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] > v[i])
                    cnt++;
            }
            ans = min(ans, cnt+(i));
        }
        cout << ans << endl;
    }
    return 0;
}