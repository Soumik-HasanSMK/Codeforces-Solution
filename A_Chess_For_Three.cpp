#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        priority_queue<int> q;
        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            q.push(a);
        }

        z = q.top();
        q.pop();
        y = q.top();
        q.pop();
        x = q.top();
        q.pop();
        int ans = 0;
        if (x == y && y == z && x > 0 && y > 0 && z > 0)
            ans = -1;
        else if (x == 0)
        {
            ans = y;
        }
        else
        {
            int s1 = y - x;
            x -= s1;
            y -= s1;

            ans = s1 + x + y;
        }
        cout << ans << endl;
    }
    return 0;
}