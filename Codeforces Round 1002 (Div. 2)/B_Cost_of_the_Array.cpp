#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define db double
#define print(ans) cout << ans << "\n"
void func(int n, int k, vector<int> v)
{
    if (n == k)
    {
        int ans = -1;
        for (int i = 2; i <= n; i += 2)
        {
            if (v[i] != i / 2)
            {
                ans = i / 2;
                break;
            }
        }
        if (ans == -1)
        {
            ans = n / 2 + 1;
        }
        cout << ans << endl;
    }
    else
    {
        int ind = -1;
        for (int i = 2; i <= n - k + 2; i++)
        {
            if (v[i] != 1)
            {
                ind = i;
                break;
            }
        }
        if (ind == -1)
        {
            int smk = 2;
            for (int i = n - k + 1; i <= n; i += 2)
            {
                if (v[i] != smk)
                {
                    break;
                }
                smk++;
            }
            cout << smk << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }
        func(n, k, v);
    }
    return 0;
}