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
        vector<int> v;
        while (n--)
        {
            string s;
            cin >> s;

            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '#')
                    v.push_back(i + 1);
            }
        }
        reverse(v.begin(), v.end());
        for (int i : v)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}