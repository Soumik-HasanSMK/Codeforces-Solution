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
        vector<int> v(n);
        int freq[100] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }
        int cnt = 0;
        for (int i = 0; i < 100; i++)
        {
            if (freq[i] > 2)
                cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}