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
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        set<int> disA(a.begin(), a.end());
        set<int> disB(b.begin(), b.end());

        if (disB.size() == 1)
            cout << ((disA.size() >= 3) ? "YES" : "NO") << endl;
        else if (disA.size() == 1)
            cout << ((disB.size() >= 3) ? "YES" : "NO") << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
