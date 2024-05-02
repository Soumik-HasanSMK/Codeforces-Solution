#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int s,result;
        s=ceil(abs(a-b)/2.0);
        if(s%c==0)
        {
            result=s/c;
        }
        else
            result=s/c+1;
        cout<<result<<endl;
    }
    return 0;
}
