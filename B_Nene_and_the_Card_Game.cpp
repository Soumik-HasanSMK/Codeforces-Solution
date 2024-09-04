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
        int ar[n];
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mx = max(mx, ar[i]);
        }
        int ar2[mx + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            ar2[ar[i]]++;
        }
        int cnt = 0;
        for (int i = 0; i <= mx; i++)
        {
            if (ar2[i] > 1)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}