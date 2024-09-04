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
        int cnt = 1;
        if (s.length() == 1)
            cnt = 1;
        else
        {
            for (int i = 0; i < s.length() - 1; i++)
            {
                if (s[i] != s[i + 1])
                {
                    cnt++;
                }
                else
                {
                    cnt++;
                    i += 2;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}