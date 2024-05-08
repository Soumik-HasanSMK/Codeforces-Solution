#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int r1=max(a*3/10,a-(a/250)*c);
    int r2=max(b*3/10,b-(b/250)*d);
    if(r1>r2)
        cout<<"Misha\n";
    else if(r1<r2)
        cout<<"Vasya\n";
    else
        cout<<"Tie\n";
    return 0;
}
