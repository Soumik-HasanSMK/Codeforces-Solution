#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue<pair<int, int>> q;
        int n;
        cin >> n;
        for (int i = n - 1; i > 0; i--)
        {
            int x = gcd(n, i);
            q.push({x, i});
        }
        cout << q.top().second << endl;
    }
    return 0;
}