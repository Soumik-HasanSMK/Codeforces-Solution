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
        if (s.find("it") != -1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}