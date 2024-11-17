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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        unordered_set<int> st;
        for (int i = 0; i < n; ++i)
        {
            if ((n - 2) % v[i] == 0)
            {
                int div = (n - 2) / v[i];
                if (st.find(div) != st.end())
                {
                    cout << v[i] << " " << div << endl;
                    break;
                }
            }
            st.insert(v[i]);
        }
    }
    return 0;
}