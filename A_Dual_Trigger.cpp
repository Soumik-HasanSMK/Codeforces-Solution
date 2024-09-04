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
        string s;
        cin >> s;
        int cnt = 0;
        vector<int> v;
        if (n == 2 && s == "00")
        {
            cout << "YES" << endl;
            return 0;
        }
        if (n == 2)
        {
            cout << "NO" << endl;
            return 0;
        }
        if (n == 1 && s == "0")
        {
            cout << "YES" << endl;
            return 0;
        }
        if (n == 1)
        {
            cout << "NO" << endl;
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                cnt++;
                v.push_back(i);
            }
        }
        if (cnt == 2 && (v[1] - v[0] == 1))
        {
            cout << "NO" << endl;
            return 0;
        }
        if (cnt % 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}