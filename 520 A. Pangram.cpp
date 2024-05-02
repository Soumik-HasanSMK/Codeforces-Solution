#include<bits/stdc++.h>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);

    sort(s.begin(),s.end());
    s.erase(unique(s.begin(),s.end()),s.end());

    if(s.size()==26)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
