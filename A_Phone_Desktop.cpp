#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int s1 = ceil(b / 2.0);
        int s2 = s1 * 15;
        int s3 = ceil(b * 2 + a) / 15.0;
        if (s1 > s3)
            cout << s1 << endl;
        else
            cout << s3 << endl;
    }
    return 0;
}