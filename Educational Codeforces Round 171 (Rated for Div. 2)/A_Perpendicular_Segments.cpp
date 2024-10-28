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
        int a, b, k;
        cin >> a >> b >> k;
        int val = min(a, b);
        cout << "0 " << val << " " << val << " 0" << endl;
        cout << "0 0 " << val << " " << val << endl;
    }
    return 0;
}