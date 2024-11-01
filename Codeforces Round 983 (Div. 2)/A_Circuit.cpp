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
        vector<int> v(2 * n);
        int cnt_on = 0;

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> v[i];
            cnt_on += v[i];
        }

        int min_on = cnt_on % 2;
        int max_on = min(cnt_on, 2 * n - cnt_on);
        cout << min_on << " " << max_on << endl;
    }
    return 0;
}