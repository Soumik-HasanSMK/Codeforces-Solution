#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
        }
        if(sum%2==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
