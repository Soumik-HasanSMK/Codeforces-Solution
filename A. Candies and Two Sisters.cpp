#include<iostream>
using namespace std;
int main()
{
    long int x,i,num,result;
    cin>>num;
    for(i=1;i<=num ;i++ )
    {
        cin>>x;
        if(x%2==0)
        {
            result=(x/2)-1;
            cout<<result<<"\n";
        }
        else
        {
            result=(x-1)/2;
            cout<<result<<"\n";
        }
    }
    return 0;
}
