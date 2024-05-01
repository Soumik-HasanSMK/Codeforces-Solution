#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,n,sum;
        cin>>n;
        string str;
        cin>>str;
        sort(str.begin(),str.end());
        str.erase(unique(str.begin(),str.end()),str.end());
        int l=str.size();
        if(l!=n)
            sum=(2*l)+(n-l);
        else
            sum=2*l;
        cout<<sum<<endl;
    }
    return 0;
}
