#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        int n;
        vector<int> v;
        for (int i = 0; i < q; i++)
        {
            cin >> n;
            int x = abs(n);
            v.push_back(x);
        }
        int sum = 0;
        for (int val : v)
        {
            sum += val;
        }
        cout << sum << endl;
    }
    return 0;
}