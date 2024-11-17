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
        if (n <= 4)
            cout << "-1" << endl;

        else
        {
            vector<int> even, odd;
            for (int i = 1; i <= n; ++i)
            {
                if (i % 2 == 0)
                    even.push_back(i);
                else
                    odd.push_back(i);
            }

            if (!even.empty() && even.back() != 4)
            {
                for (int i = 0; i < even.size(); ++i)
                {
                    if (even[i] == 4)
                    {
                        swap(even[i], even.back());
                        break;
                    }
                }
            }

            if (!odd.empty() && odd.front() != 5)
            {
                for (int i = 0; i < odd.size(); ++i)
                {
                    if (odd[i] == 5)
                    {
                        swap(odd[i], odd.front());
                        break;
                    }
                }
            }

            for (int num : even)
            {
                cout << num << " ";
            }
            for (int num : odd)
            {
                cout << num << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
