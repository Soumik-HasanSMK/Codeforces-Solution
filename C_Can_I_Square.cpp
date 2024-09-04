#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
        }
        int ans = static_cast<int>(sqrt(sum));
        if (ans * ans == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
