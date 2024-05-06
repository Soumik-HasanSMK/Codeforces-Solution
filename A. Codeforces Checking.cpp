#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string ch="codeforces";
    while(t--)
    {
        char a;
        cin>>a;
        if(find(ch.begin(),ch.end(),a)!=ch.end())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
