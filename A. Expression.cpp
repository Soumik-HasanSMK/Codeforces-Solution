#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,z,r;
    cin>>x>>y>>z;
    int a[10];
    a[0]=x+y+z;
    a[1]=x*y*z;
    a[2]=x*(y+z);
    a[3]=y*(x+z);
    a[4]=z*(x+y);
    a[5]=x*y+z;
    a[6]=x*z+y;
    a[7]=y*z+x;
    int max=a[0];
    for(int i=1;i<8;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    cout<<max<<endl;
    return 0;
}
