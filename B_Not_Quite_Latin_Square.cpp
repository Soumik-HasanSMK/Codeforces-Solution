#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    char x[3][3];
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> x[i][j];
            }
        }
        char ans;
        for (int i = 0; i < 3; i++)
        {
            if (x[i][0] == '?')
            {
                if ((x[i][1] == 'A' && x[i][2] == 'B') || (x[i][1] == 'B' && x[i][2] == 'A'))
                    ans = 'C';
                if ((x[i][1] == 'B' && x[i][2] == 'C') || (x[i][1] == 'C' && x[i][2] == 'B'))
                    ans = 'A';
                if ((x[i][1] == 'A' && x[i][2] == 'C') || (x[i][1] == 'C' && x[i][2] == 'A'))
                    ans = 'B';
            }
            else if (x[i][1] == '?')
            {
                if ((x[i][0] == 'A' && x[i][2] == 'B') || (x[i][0] == 'B' && x[i][2] == 'A'))
                    ans = 'C';
                if ((x[i][0] == 'B' && x[i][2] == 'C') || (x[i][0] == 'C' && x[i][2] == 'B'))
                    ans = 'A';
                if ((x[i][0] == 'A' && x[i][2] == 'C') || (x[i][0] == 'C' && x[i][2] == 'A'))
                    ans = 'B';
            }
            else if (x[i][2] == '?')
            {
                if ((x[i][0] == 'A' && x[i][1] == 'B') || (x[i][0] == 'B' && x[i][1] == 'A'))
                    ans = 'C';
                if ((x[i][0] == 'B' && x[i][1] == 'C') || (x[i][0] == 'C' && x[i][1] == 'B'))
                    ans = 'A';
                if ((x[i][0] == 'A' && x[i][1] == 'C') || (x[i][0] == 'C' && x[i][1] == 'A'))
                    ans = 'B';
            }
        }
        cout << ans << endl;
    }
    return 0;
}