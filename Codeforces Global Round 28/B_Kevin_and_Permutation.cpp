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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        int smk = 1;
        for (int i = k - 1; i < n; i += k, smk++)
            v[i] = smk;
        for (int i = 0; i < n; i++)
        {
            if ((i + 1) % k != 0)
            {
                v[i] = smk;
                smk++;
            }
        }

        for (int num : v)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
