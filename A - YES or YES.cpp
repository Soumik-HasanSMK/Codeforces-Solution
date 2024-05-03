#include<bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s="yes";
    while(t--)
    {
        string m;
        cin>>m;
        transform(m.begin(),m.end(),m.begin(),::tolower);
        if(m==s)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
