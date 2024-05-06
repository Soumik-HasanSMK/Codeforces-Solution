#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,a,d,count=0;
    cin>>k>>n;
    for(int i=0;i<k;i++)
    {
        cin>>a;
        d=5-a;
        if(d>=n)
            count++;
    }
    cout<<count/3<<endl;
    return 0;
}
