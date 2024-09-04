#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string s1;
        for (int i = s.length() - 1; i >= 0; i--)
        {
            s1 += s[i];
        }

        set<char> st;
        bool ans = false;
        for (int i = 0; i < s.length(); i++)
        {
            st.insert(s[i]);
        }
        if (st.size() != 1)
            ans = true;
        if (ans)
        {
            cout << "YES" << endl;
            sort(s1.begin(), s1.end());
            if (s1 == s)
            {
                swap(s1[0], s1[s1.length() - 1]);
            }
            cout << s1 << endl;
        }

        else
            cout << "NO" << endl;
    }
    return 0;
}