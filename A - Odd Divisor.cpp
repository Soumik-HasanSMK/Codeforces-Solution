#include<iostream>
using namespace std;
int main()
{
    long long int t,n,i,r;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n==2)
            cout << "NO" << endl;
        else if(n%2==1)
            cout << "YES" << endl;
        else
        {
            while(n%2==0)
                n/=2;
            if(n!=1&&n%2==1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }

    }
    return 0;
}
