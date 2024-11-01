#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int size;
        cin >> size;
        vector<ll> v(size);
        for (int i = 0; i < size; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        int result = size;
        int left = 1, right = size;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            bool isValid = false;

            if (mid == 1)
            {
                result = min(result, size - 1);
                left = mid + 1;
                continue;
            }
            for (int i = 0; i + mid - 1 < size; i++)
            {
                ll sum = v[i] + v[i + 1];
                if (sum > v[i + mid - 1])
                {
                    isValid = true;
                    break;
                }
            }

            if (isValid)
            {
                result = min(result, size - mid);
                left = mid + 1;
            }
            else
                right = mid - 1;
        }
        cout << result << '\n';
    }
    return 0;
}