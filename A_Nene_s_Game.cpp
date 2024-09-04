#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        int ar1[m], ar2[n];
        for (int i = 0; i < m; i++)
        {
            cin >> ar1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> ar2[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (ar2[i] < ar1[0])
                cout << ar2[i] << " ";
            else
                cout << ar1[0] - 1 << " ";
        }
        cout << endl;
    }
    return 0;
}