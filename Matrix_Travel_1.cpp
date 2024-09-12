#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, i, j;
        cin >> n >> m >> i >> j;

        // Calculate maximum time
        int maxTime = max(i - 1, n - i) + max(j - 1, m - j);

        cout << maxTime << endl;
    }

    return 0;
}