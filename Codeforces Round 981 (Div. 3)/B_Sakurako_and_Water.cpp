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
        vector<vector<int>> v(n, vector<int>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
        }
        vector<int> x(2 * n - 1, 0);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                x[i - j + n - 1] = min(x[i - j + n - 1], v[i][j]);
            }
        }
        int sum = 0;
        for (int val : x)
        {
            if (val < 0)
                sum -= val;
        }
        cout << sum << endl;
    }
    return 0;
}