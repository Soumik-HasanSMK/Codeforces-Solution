#include<iostream>
using namespace std;
int main()
{
    int i,n,s=1, low;
    cin>>n;
    int a[n];
    for( i=0 ;i<n ;i++ )
    {
        cin>>a[i];
    }
    if(a[i]==0)
    {
        cout<<"0\n";
    }
    else if(a[i]!=0)
    {
        low=a[0];
        for ( i = 0; i < n; i++ )
        {
            if ( a[0]> a[i] )
            {
                low = a[i];
            }
        }
        low=abs(low);
        cout<<low;
    }
    return 0;
}
