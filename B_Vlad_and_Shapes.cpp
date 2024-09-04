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
        char arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }
        bool tri = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (arr[i][j] == '1' && arr[i][j - 1] == '0' && arr[i][j + 1] == '0')
                {
                    tri = true;
                    break;
                }
            }
        }
        if (!tri)
            cout << "SQUARE" << endl;
        else
            cout << "TRIANGLE" << endl;
    }
    return 0;
}