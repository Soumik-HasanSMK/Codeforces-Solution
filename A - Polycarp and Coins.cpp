#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num,a,b;
        cin>>num;
        if(num%3==0)
        {
            a=num/3;
            b=a;
        }
        else if(num%3==1)
        {
            a=(num/3)+1;
            b=num/3;
        }
        else
        {
            a=num/3;
            b=(num/3)+1;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
