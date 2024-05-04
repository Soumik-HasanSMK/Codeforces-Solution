#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m;
    cin>>n>>m;
    char a[n][m];
    bool color=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
                color=1;
        }
    }
    if(color)
        cout<<"#Color\n";
    else
        cout<<"#Black&White\n";
    return 0;
}
