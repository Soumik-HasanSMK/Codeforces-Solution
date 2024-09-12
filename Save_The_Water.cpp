#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    double s=b/(1.00*a*c);
    if(s>=1.00)
        printf("%.2lf",s);
    else
        cout<<"-1"<<endl;
    return 0;
}