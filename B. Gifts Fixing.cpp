#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int a[n],b[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>b[i];
        int mna=*min_element(a,a+n);
        int mnb=*min_element(b,b+n);
        long long ans=0;
        for(i=0;i<n;i++)
        {
            ans+=max(a[i]-mna,b[i]-mnb);
        }
        cout<<ans<<endl;
    }
    return 0;
}
