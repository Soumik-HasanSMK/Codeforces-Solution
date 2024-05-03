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
        int s=0;
        while(n--)
        {
            int a,b;
            cin>>a>>b;
            if(a>b)
                s++;
        }
        cout<<s<<endl;
    }
    return 0;
}
