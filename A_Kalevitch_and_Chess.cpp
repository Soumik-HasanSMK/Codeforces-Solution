#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    char ch[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> ch[i][j];
        }
    }
    int cnt = 0;
    for (int i = 0; i < 8; i++)
    {
        bool smk = true;
        for (int j = 0; j < 8; j++)
        {
            if (ch[i][j] != 'B')
                smk = false;
        }
        if (smk)
            cnt++;
    }
    for (int i = 0; i < 8; i++)
    {
        bool smk = true;
        for (int j = 0; j < 8; j++)
        {
            if (ch[j][i] != 'B')
                smk = false;
        }
        if (smk)
            cnt++;
    }
    if (cnt == 16)
        cnt = 8;
    cout << cnt;
    return 0;
}