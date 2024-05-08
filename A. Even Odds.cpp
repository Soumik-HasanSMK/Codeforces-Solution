#include<iostream>
using namespace std;
int main()
{
    long long half,i,n,k;
    cin>>n>>k;
    if(n%2==0)
        half=n/2;
    else
        half=(n+1)/2;
    if(k<=half)
        cout<<2*k-1<<endl;
    else
        cout<<(k-half)*2<<endl;
    return 0;
}
