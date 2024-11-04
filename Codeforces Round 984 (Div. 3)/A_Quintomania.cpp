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
        vector<int> a(n);
        for (int &x : a)
            cin >> x;
        
        bool isValid = true;
        for (int i = 1; i < a.size(); i++)
        {
            if (abs(a[i] - a[i - 1]) != 5 && abs(a[i] - a[i - 1]) != 7)
            {
                cout << "No\n";
                isValid = false;
                break;
            }
        }
        if (isValid)
        {
            cout << "Yes\n";
        }
    }
    return 0;
}