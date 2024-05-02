#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    ;
    cin>>t;
    while(t--)
    {
        int a[2][2];
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<2;j++)
            {
                a[i][j]=a[i+1][j+1];
                cout<<a[i][j]<<endl;
            }
        }

    }
    return 0;
}
