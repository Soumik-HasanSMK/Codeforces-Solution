#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int x = 0;
        long long int count = 0;
        for (long long int i = 0; i < n; i++)
        {
            cin >> x;
            if (x % 2 == 1)
            {
                count++;
            }
        }
        if ((count & 1) || (1 <= count && count < n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}